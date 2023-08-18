unsigned int fatorialRec(unsigned int n) {
  if (n <= 1) return 1;
  return n * fatorialRec(n-1);
}
