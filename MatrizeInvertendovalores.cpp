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
 int minhaMatriz[2][2], aux1, aux2;
 
 printf("digite um valor para [0][0]");
 scanf("%d", &minhaMatriz[0][0]);
 printf("digite um valor para [0][1]");
 scanf("%d", &minhaMatriz[0][1]);
 printf("digite um valor para [1][0]");
 scanf("%d", &minhaMatriz[1][0]);
 printf("digite um valor para [1][1]");
 scanf("%d", &minhaMatriz[1][1]);
 
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
