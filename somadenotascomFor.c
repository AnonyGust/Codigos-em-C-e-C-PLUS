/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main() {
    
  int tamanho;
    printf("digite quantas notas irá digitar: ");
        scanf("%d", &tamanho);
  float vet[tamanho], soma;
  int i;
  
  for(i =0; i < tamanho; i++) {
      printf("digite as notas: ");
        scanf("%f", &vet[i]);
            soma = soma + vet[i];
      
  }
  for(i =0; i < tamanho; i++) {
      printf("\nas notas foram %.2f ", vet[i]);
      
  }
        printf("\na media da nota é %.2f", soma / tamanho);
    if(soma / tamanho >= 7 ) {
        printf("\naprovado");
    }else{
        printf("\nreprovado");  
  }
}