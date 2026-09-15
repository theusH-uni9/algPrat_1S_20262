#include <stdio.h>

int main()
{
    int saque, n50 = 0, n20 = 0, n10 = 0;
    
    printf("Por favor, digite o valor para o saque em múltiplos de 10: ");
    scanf("%d",&saque);
   
// if(saque % 10 != 0) {print e return 1}

   if(saque % 10 == 0){ 
        n50 = saque / 50; // Calcula quantas notas de 50 são possiveis
        saque %= 50;       // Remove o valor máximo em notas de 50
        
        n20 = saque / 20; // Calcula quantas notas de 20 são possiveis
        saque %= 20;       // Remove o valor máximo em notas de 20
        
        n10 = saque / 10; // Calcula quantas notas de 10 são possiveis
        
        printf("-- Saque efetuado --\nNotas de R$50: %d\nNotas de R$20: %d\nNotas de R$10: %d\n",n50,n20,n10);
   } else {
        printf("Valor inválido! Por favor, digite um valor múltiplo de 10.\n");
   }

    return 0;
}