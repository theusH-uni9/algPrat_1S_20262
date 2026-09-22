#include <stdio.h>

int main(){

    int num = 0, soma = 0, rep = 0;

    while(num >= 0){
        printf("Digite o valor positivo que deseja somar: ");
        scanf("%d", &num);
        if (num < 0){
            break;
        }
        soma += num;
    }

    printf("A soma dos números é de: %d\n", soma);

    return 0;
}