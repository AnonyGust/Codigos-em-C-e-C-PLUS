/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int x, y, valor;
  
  printf("digite o valor");
  scanf("%d", &valor);
  
  for(x = 0; x <= valor; x++) {
      for(y = 0; y < x; y++) {
          printf("*");
          
      }
      printf("\n");
  }
  
}
