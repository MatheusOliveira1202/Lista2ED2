#include <iostream>

int main()
{
 
    int i, n = 16;
    for (i = 1; i <= n; i=i*2) {
        std::cout << "Hello World !!!\n";
    }
    return 0;
}

//explicação : aqui temos uma iteração que cresce duas vezes de tamanho na leitura. É uma estrutura linear pois ainda vai ler um conjunto de dados passado anteriormente e vai crescer de acordo com a leitura, fazendo desse método um método de complexidade O(n)
