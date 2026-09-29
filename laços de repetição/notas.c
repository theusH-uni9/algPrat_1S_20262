#include <stdio.h>

int main(){

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
    
    return 0;
    // finalizado
}