
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    
    int tamanho;
    printf("qual sera o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    float vet[tamanho], soma;
    int i;
    for(i = 0; i < tamanho; i++) {
        soma = soma + vet[i];
        printf("digite o valor: ");
        scanf("%f", &vet[i]);
    }
     printf("media dos valores é: %.2f", soma/tamanho);
}
