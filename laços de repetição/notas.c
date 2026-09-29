#include <stdio.h>

int main(){
/*
    // Versão com while

    int numNotas, i;
    float nota = 0, soma = 0, media = 0;

    printf("Deseja calcular a média de quantas notas? ");
    scanf("%d", &numNotas);

    if (numNotas <= 0){
        printf("Valor inválido.\n");
        return 0;
    }

    i = 1;
    while (i <= numNotas){
        printf("Digite a %d° nota: ",i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
            printf("Valor inválido.\n");
        }
        else{
            if (numNotas == 1){
                printf("A nota final é: %.1f\n", nota);
                return 0;
        }
            soma += nota;
            nota = 0;
            i++;
        }
    }
    media = soma / numNotas;
    
    printf("\nA soma das %d notas é de: %.1f\n", numNotas, soma);
    printf("A média das %d notas é de: %.1f\n", numNotas, media);
    
*/

    // Versão com do while
    int numNotas, i;
    float nota = 0.0, soma = 0.0, media = 0.0;

    do{
        printf("Digite a quantidade de notas: ");
        scanf("%d", &numNotas);

        if(numNotas <= 0){
            printf("Valor %d inválido.\n", numNotas);
        }
    }while(numNotas <= 0);

    i = 1;
    do{
        printf("Digite a %dº nota: ", i);
        scanf("%f", &nota);

        if (nota < 0 || nota > 10){
            printf("Nota %.1f inválida.\n", nota);
        } else {
            printf("%dº nota = %.1f\n",i,nota);
            soma += nota;
            i++;
        }
    }while(i <= numNotas);

    media = soma / numNotas;

    printf("A média final é de: %.1f\n", media);


    return 0;
    // finalizado
}