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
#include <stdbool.h>

using namespace std;
int main()
{
 setlocale(LC_ALL, "");
 
 

    int i, j, matriz[3][3];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("digite um valor[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
        
        
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf(" %d " " ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
}
