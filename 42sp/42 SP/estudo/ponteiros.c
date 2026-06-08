#include <stdio.h>

void descobrirMenorMaiorPorValores(int *v, int me, int ma, int tamanho)
{
    int i;
    me = v[0];
    ma = v[0];

    for(i = 1; i < tamanho; i++)
    {
        if(v[i] < me)
            me = v[i];
        if(v[i] > ma)
            ma = v[i];
    }

    printf("Dentro da funcao descobrirMenorMaiorPorReferencia: Menor: %d\tMaior: %d\n", me, ma);
}

void descobrirMenorMaiorPorReferencia(int *v, int *me, int *ma, int tamanho)
{
    int i;
    *me = v[0]; // forma de alterar o conteudo apontado
    *ma = v[0];

    for(i = 1; i < tamanho; i++)
    {
        if(v[i] < *me) // comparacao entre os inteiros posicao i de v(vetor) com valor apontado por me 
            *me = v[i];// forma de alterar o conteudo apontado
        if(v[i] > *ma)
            *ma = v[i];
    }

    printf("Dentro da funcao descobrirMenorMaiorporValores: Menor: %d\tMaior: %d\n", *me, *ma); // nesse momento eu quero o conteudo apontado pelo ponteiro
}

int main()
{
    int menor;
    int maior;
    int vet[] = {50, 10, 250, 500, 25}; // todo vetor apenas o nome dele já é um ponteiro
    int valor = 10;
    int *p; // instancia de um ponteiro /

    p = &valor; // valor de ponteiro sera o end da variavel valor

    printf("Valor: %d\t | Endereço de Valor: %p\n", valor, &valor);
    printf("Endereço de p: %p\n", &p);
    printf("Conteudo de p: %p\n", p);
    printf("Conteudo apontado por p: %d\n", *p);


    descobrirMenorMaiorPorValores(vet, menor, maior, 5);
    descobrirMenorMaiorPorReferencia(vet, &menor, &maior, 5); // deixo de passar o conteudo e passo o valor

    printf("Dentro da Main (Valor): Menor: %d\tMaior: %d\n", menor, maior);
    printf("Dentro da Main (Ref): Menor: %d\t Maior: %d\n", menor, maior);


    return (0);
}