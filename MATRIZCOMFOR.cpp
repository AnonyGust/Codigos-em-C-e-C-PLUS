/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;
int main()
{
 setlocale(LC_ALL, "");
 int minhaMatriz[2][2], aux1, aux2, i, j;
 
 printf("Apresentado MatrizRatata\n\n");
 
 for(i = 0; i < 2; i++) {
     for(j = 0; j < 2; j++) {
        printf("digite um valor para [%d][%d]", i, j);
             scanf("%d", &minhaMatriz[i][j]);
     
     }
 }
 
 
 aux1 = minhaMatriz[0][0];
 aux2 = minhaMatriz[0][1];
 
 
 //invertendo valores usando auxiliares aux1 e aux2
 minhaMatriz[0][0] = minhaMatriz[1][0];
 minhaMatriz[0][1] = minhaMatriz[1][1];
 minhaMatriz[1][0] = aux1;
 minhaMatriz[1][1] = aux2;
 
 printf("\n%d, %d", minhaMatriz[0][0], minhaMatriz[0][1]);
 printf("\n%d, %d", minhaMatriz[1][0], minhaMatriz[1][1]);
}
