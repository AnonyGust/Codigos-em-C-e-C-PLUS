/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
int main()
{
 setlocale(LC_ALL, "");
 char palavra[255];
 printf("digite uma palavra");
 
 //LIMPA O BUFFER
 setbuf(stdin, 0);
 
 //LÊ A STRING
 fgets(palavra, 255, stdin);
 
 //LIMPA AS CASAS 
 palavra[strlen(palavra)-1] = '\0';
 
 printf("%s", palavra);
 
}
