#include <stdio.h>

int main(){

    int num;

    printf("Insira um número inteiro para verificar se ele é par ou ímpar: ");
    scanf("%d", &num);
/*  
    // Desse jeito, caso o número SEJA par, a condição vai retornar
    // um 0, fazendo com que o if considere a condição falsa e vai
    // executar o else.

    if (num % 2){
        printf("%d é ímpar\n", num);
    } else {
        printf("%d é par\n", num);
    }
*/

    // Desse jeito, utilizando o == 0, a condição vai retornar 
    // 1 (verdadeiro), fazendo com que o if seja executado.

    if (num % 2 == 0){
        printf("%d é par\n", num);
    } else {
        printf("%d é ímpar\n", num);
    }

    return 0;
}