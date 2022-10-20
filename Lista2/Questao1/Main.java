class Main {
  public static void main(String[] args) {
    int n = 5;
    for (int i = 1; i <= n; i++){
    for(int j = 1; j < n; j = j * 2) {
        System.out.println("Hey - I'm busy looking at: " + i + " and " + j);
    }
}
  }
}

/*
explicação : é O(n log n), pois temos uma iteração linear que vai até o fim do array utilizado, sendo um O(n) e dentro dele temos uma iteração linear que cresce de forma logarítmica pois anda metade do caminho a ser percorrido no array, por crescer a leitura de forma duplicada, ou seja, sendo um O(log n). No final das contas teremos um O(n) x O(log n) = O(n log n)
*/