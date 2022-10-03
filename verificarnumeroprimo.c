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
    
    int i, valor, aux = 0;
   
   printf("digite um valor");
   scanf("%d", &valor);
   for(i = 1; i <= valor; i++) {
       
       if(valor % i == 0) {
           aux++;
       }
       printf("%d / %d sobra =  %d", valor, i, valor%i);
   }
   if(aux == 2) {
        printf("o número é primo");
   }else{
       printf("número não é primo");
   }
}