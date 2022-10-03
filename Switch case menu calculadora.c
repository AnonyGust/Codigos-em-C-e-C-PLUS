/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    float valor;
    for(int i = 0; i < 2; i++) {
        printf("digite o valor: " );
        scanf("%f", &valor);
    }
    do {
    printf("\ndigite uma opcao: ");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
        printf("o valor somado é: %f", valor + valor);
        break;
        case 2:
        printf("o valor subtraido é: %f", valor - valor);
        break;
        case 3:
        printf("o valor multiplicado é: %f", valor * valor);
        break;
        case 4:
        printf("o valor dividido é: %.2f", valor / valor);
        break;
        default: 
        printf("valor inválido");
        break;
    }
    }while(opcao == 0 || opcao > 4);
}
