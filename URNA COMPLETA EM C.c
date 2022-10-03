#include <stdio.h>
#include <stdlib.h>
int main()
{
 int voto=7, c1 = 0, c2 = 0, c3 = 0, c4 = 0, votoNulo = 0, votoemBranco = 0, i, votosGuardados;
 printf("BEM-VINDO! INICIE AS VOTACOES!");
 
 
     while(voto!=1313)
    {
     printf("\n\n 1 - Fulano\n 2 - Ciclano\n 3 - Beltrano\n 4 - Candango\n 5 - Voto Nulo\n 6 - Voto em Branco");
        printf("\n Digite o numero correspondente ao seu voto e aperte enter: ");
            scanf("%d", &voto);
            
            
     
     switch(voto)
    {
        case 1313:
            printf("\n votacao encerrada");
            break;
        
        case 1:
            c1 = c1 + 1;
            printf("Voce votou em Fulano, Obrigado pelo seu voto!");
            break;
            
        case 2:
            c2 = c2 + 1;
            printf("Voce votou em Ciclano, Obrigado pelo seu voto!");
            break; 
            
        case 3:
            c3 = c3 + 1;
            printf("Voce votou em Beltrano, Obrigado pelo seu voto!");
            break;  
            
        case 4:
            c4 = c4 + 1;
            printf("Voce votou em Candango, Obrigado pelo seu voto!");
            break;  
            
        case 5:
            votoNulo = votoNulo + 1;
            printf("Voce votou Nulo, Obrigado pelo seu voto!");
            break;
            
        case 6:
            votoemBranco = votoemBranco + 1;
            printf("Voce votou em Branco, Obrigado pelo seu voto!");
            break;
            
        default:
            printf("Opcao invalida!");
            break;
    } 
 }
 
 printf("\n Resultados:\n Fulano\t\t%d\n Ciclano\t%d\n Beltrano\t%d\n Candango\t%d\n votosNulo\t%d\n votosemBranco\t%d\n", c1, c2, c3, c4, votoNulo, votoemBranco);
 
 if((c1>c2) && (c1>c3) && (c1>c4)) {
        printf("\nO candidato fulano é o vencedor");
            }else if((c2>c1) && (c2>c3) && (c2>c4)) {
                printf("\nO ciclano é o vencedor");
                }else if((c3>c1) && (c3>c2) && (c3>c4)) {
                    printf("\nO beltrano é o vencedor");
                    }else if((c4>c1) && (c4>c2) && (c4>c3)) {
                        printf("\nO candango é o vencedor");
                        }  
}