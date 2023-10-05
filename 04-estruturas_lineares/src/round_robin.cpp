#include <iostream>
#include <sstream>

using namespace std;

class RoundRobin {
private:
  struct Process {
    char id;
    unsigned cpuTime;
    Process *prev, *next;
    Process(char i, unsigned c) {
      id = i;  cpuTime = c;  prev = next = nullptr;
      cerr << "+ Process(" << id << "," << cpuTime << ") criado..." << endl;
    }
    ~Process() {  cerr << "- Process(" << id << "," << cpuTime << ") destruído..." << endl;  }
  };
  char nextId = 'A';
  unsigned timeSlice;
  Process *readyQueue;
public:
  RoundRobin(unsigned ts = 1) {  timeSlice = ts;  readyQueue = nullptr;  }
  ~RoundRobin() {  clear();  }
  void clear() { // DESALOCAÇÃO
    if ( readyQueue == nullptr ) return;
    Process *p = readyQueue;
    do {
      Process *aux = p;
      p = p->next;
      delete aux;
    } while ( p != readyQueue );
  }
  void add(unsigned tCpu) { // INSERÇÃO
    Process *p = new Process(nextId++, tCpu);
    if ( readyQueue == nullptr )
       readyQueue = p->prev = p->next = p;
    else {
       Process *prev = readyQueue->prev;
       prev->next = p;
       p->prev = prev;
       p->next = readyQueue;
       readyQueue->prev = p;
    }
  }
  string run() {
    stringstream ss;
    while ( readyQueue != nullptr ) {
          char id = readyQueue->id;
          unsigned t;
          if ( readyQueue->cpuTime <= timeSlice ) { // EXCLUSÃO
             t = readyQueue->cpuTime;
             if ( readyQueue == readyQueue->next ) {
                delete readyQueue;
                readyQueue = nullptr;
             }
             else {
                Process *prev = readyQueue->prev, *next = readyQueue->next;
                prev->next = next;
                next->prev = prev;
                delete readyQueue;
                readyQueue = next;
             }
          }
          else {
             t = timeSlice;
             readyQueue->cpuTime -= timeSlice;
             readyQueue = readyQueue->next;
          }
          for (unsigned i=0; i<t; ++i) ss << id;
    }
    nextId = 'A';
    return ss.str();
  }
  string str() {
    if ( readyQueue == nullptr ) return "";
    stringstream ss;
    Process *aux = readyQueue;
    ss << "readyQueue -->";
    do {
      ss << "  ||" << aux->id << "|" << aux->cpuTime << "||";
      aux = aux->next;
    } while ( aux != readyQueue );
    return ss.str();
  }
};

int main() {
  RoundRobin rr(3);
  rr.add(12);  rr.add(8);  rr.add(15);  rr.add(5);
  cout << rr.str() << endl << rr.run() << endl;
  return 0;
}
