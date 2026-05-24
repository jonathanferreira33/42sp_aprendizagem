Para entender a aritmética de ponteiros, imagine a memória do computador como uma **rua cheia de casas numeradas (endereços)**, onde cada casa consegue guardar exatamente **1 byte** de informação.

Quando você cria um ponteiro, você está guardando o número de uma dessas casas. A "aritmética" acontece quando você soma ou subtrai valores desse ponteiro (ex: `ptr + 1` ou `ptr++`).

A grande armadilha é: **somar 1 a um ponteiro não significa necessariamente andar 1 casa (1 byte) para o lado.** O ponteiro anda blocos de memória baseados no **tipo** de dado para o qual ele aponta.

- **Ponteiro de `char` (`char *ptr`):** Como um `char` ocupa 1 byte, se o ponteiro está na casa 1000, `ptr + 1` vai para a casa **1001**.
    
- **Ponteiro de `int` (`int *ptr`):** Como um `int` ocupa 4 bytes, se o ponteiro está na casa 1000, `ptr + 1` vai para a casa **1004**. O compilador sabe que para chegar no "próximo número inteiro", ele precisa pular 4 casas de uma vez.