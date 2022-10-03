/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




void main()
{
    setlocale(LC_ALL, "");
    
  int tamanho;
  printf("digite o tamanho: ");
  scanf("%d", &tamanho);
  
  float vet[tamanho], soma;
  int i;
  
  for(i = 0; i < tamanho; i++) {
      printf("digite os valores: ");
      scanf("%f", &vet[i]);
      soma = soma + vet[i];
  }
  for(i = 0; i < tamanho; i++) {
      printf("os valores são %d: %.2f", i, vet[i]);
  }
  
  printf("a média dos valores é %.2f", soma / tamanho);
    
  
}