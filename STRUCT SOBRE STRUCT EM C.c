/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct data {
        int dia;
            int mes;
                int ano;
 } data;
    struct aluno {
        int id;
        data Nascimento;
    };
    int main () {
    
    struct aluno aluno1;
    aluno1.Nascimento.dia = 5;
    aluno1.Nascimento.mes = 07;
    aluno1.Nascimento.ano = 1999;
    
    printf("Nascido em %d / %d / %d", aluno1.Nascimento.dia, aluno1.Nascimento.mes, aluno1.Nascimento.ano);
    
    
    
   
   
   
   return 0;
}
