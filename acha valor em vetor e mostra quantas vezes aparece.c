/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i;
 int vet[5];
 int indice;
 
    for(i = 0; i < 5; i++) {
        scanf("%d", &vet[i]);
     
     
    }
    /*printf("digite o indice a ser consultado");
        scanf("%d", &indice);
 
    while((indice >=0) && (indice < 5)) {
    printf("o indice consultado é %d", vet[indice]);
        printf("digite o indice a ser consultado");
            scanf("%d", &indice);
     }*/
    
    int achouValor = 0;
    int contaValores = 0;
    printf("digite o valor a ser buscado");
    scanf("%d", &achouValor);
    
    for(i = 0; i < 5; i++) {
        if(achouValor == vet[i]) {
            achouValor = 1;
            contaValores = contaValores + 1;
        }    
    }
    if(achouValor == 0) {
        printf("o valor não existe no vetor");
    }else if(achouValor == 1) {
        printf("o valor existe e esta na posição: %d", i);
        printf("o valor aparece %d vezes", contaValores);
    }
}



