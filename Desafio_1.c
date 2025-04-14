/*Faça um programa na linguagem C que colete 20 números inteiros, 
armazene cada valorem um vetor. Ao final, mostre todos os valores, 
em seguida, quais são os números pares e quantos são pares.*/

#include <stdio.h>
#define Quantidade 20

int main(){
   
   int vetor[Quantidade];
   int contador;
   int Qtd_Pares = 0;
   
     for(contador = 0; contador < Quantidade; contador++){
        printf("Insira o %i° valor: ", contador+1);
        scanf("%i", &vetor[contador]);
      }
      
   printf("\n");
    
    for(contador = 0; contador < Quantidade; contador++){
      printf("%i° valor é: %i \n", contador+1, vetor[contador]);
    }
 
    printf("\n");
    
    for(contador = 0; contador < Quantidade; contador++){
      if(vetor[contador]%2 == 0){
         printf("O número %i é par. \n", vetor[contador]);
         Qtd_Pares++;
      }
    }
   
    printf("\n Foram inseridos %i números pares.", Qtd_Pares);
   
    return 0;

}
