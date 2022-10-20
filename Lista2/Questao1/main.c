#include <stdio.h>

void main()
{
    int i, n = 8;
    for (i = 1; i <= n; i=i*2) {
        printf("Hello World !!!\n");
    }
}

//explicação : aqui temos uma iteração que cresce duas vezes de tamanho na leitura. É uma estrutura linear pois ainda vai ler um conjunto de dados passado anteriormente e vai crescer de acordo com a leitura, fazendo desse método um método de complexidade O(n)
