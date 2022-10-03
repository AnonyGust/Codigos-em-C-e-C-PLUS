/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, valorUsuario, maiorValor;

    for(i = 0; i < 10; i++) {
         printf("digite um valor fdp");
         scanf("%d", &valorUsuario);
         
         if(i == 0) {
             maiorValor = valorUsuario;
         }else if(valorUsuario > maiorValor) {
            maiorValor = valorUsuario;
         }
         
        
    }
    printf("maior valor é: %d", maiorValor);
    
    
}
