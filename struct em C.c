/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    struct palavra {
        int ordem;
        int letra;
        char texto[255];
        
    };

   int main () {
   struct palavra primeiraPalavra;
   
   primeiraPalavra.ordem = 0;
   primeiraPalavra.letra = 'c';
   strcpy(primeiraPalavra.texto, "hahahapalahacao");
   
   printf("ordem: %d, letra: %c, texto: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);
   
   struct palavra listaDePalavras[3];
   
   listaDePalavras[0].ordem = 0;
   listaDePalavras[1].ordem = 1;
   listaDePalavras[2].ordem = 2;
   listaDePalavras[0].letra = 'a';
   listaDePalavras[1].letra = 'b';
   listaDePalavras[2].letra = 'c';
   strcpy(listaDePalavras[0].texto, "haha");
   strcpy(listaDePalavras[1].texto, "hoho");
   strcpy(listaDePalavras[2].texto, "huhu");
   
   int i;
   
   for(i = 0; i < 3; i++) {
       printf("\nordem: %d, letra: %c, texto: %s", listaDePalavras[i].ordem, listaDePalavras[i].letra, listaDePalavras[i].texto);
   }
   
   
   return 0;
   
}
