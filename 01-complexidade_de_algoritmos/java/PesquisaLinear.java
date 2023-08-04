public class PesquisaLinear {

  private static final int INI = 1000000;
  private static final int FIM = 8000000;
  private static final int INC = 10000;

  private static int localiza(int[] dados, int valor) {
    for (int pos=0; pos<dados.length; pos++)
        if (valor == dados[pos])
           return pos;
    return -1;
  }

  public static void main(String[] args) {
    int[] vetor = new int[FIM];
    for (int pos=0; pos<FIM; pos++) //preenche o vetor
        vetor[pos] = pos;
    for (int total=INI; total<=FIM; total+=INC) {
        long antes = System.nanoTime();
        int loc = localiza(vetor, total-1); //pior caso: último elem
        long depois = System.nanoTime();
        if (loc != total-1) System.exit(1);
        long microssegundos = (depois - antes)/1000;
        System.out.printf("%d %d\n", total, microssegundos);
    }
  }

}

