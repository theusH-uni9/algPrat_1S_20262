#include <stdio.h>

int main(){

    float num = 0, soma = 0; int rep = 0;

    while(num >= 0){
        printf("Digite o valor positivo que deseja somar: ");
        scanf("%f", &num);
    if (num < 0){
        break;
    }
        soma += num;
        rep++;
    }

    printf("A média das notas digitadas é de:  %.1f\nNúmero de notas digitadas: %d\n", (soma/rep), rep);

    return 0;
}