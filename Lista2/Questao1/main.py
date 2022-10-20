def quadratic_algo(items):
    for item in items:
        for item2 in items:
            print(item, ' ' ,item2)

quadratic_algo([4, 5, 6, 8])

#Explicação : nesse método há duas estruturas lineares, uma dentro da outra, fazendo com que cada iteração do primmeiro conjunto de dados(array), gere uma segunda estrutura linear inteira, assim temos  O(n) x O(n) = O(n²)
