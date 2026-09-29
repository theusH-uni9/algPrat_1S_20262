#include <stdio.h>

int main(){

    int i, soma = 0;
    i = 0;
    while (i<10){
        printf("%d ",i);
        soma += i;  // Acumulador
        i++;        // Contador
    } printf("\nSoma: %d\n", soma);
    printf("\n");
    printf("---------------------------\n");

    i = 11;
    soma = 0;
    while (i<=14){
        printf("%d ",i);
        soma += i;
        i++;
    } printf("\nSoma: %d\n", soma);

    printf("\n---------------------------\n");

    i = 4;
    soma = 0;
    while (i>=0){
        printf("%d ",i);
        soma += i;
        i--;
    } printf("\nSoma: %d\n", soma);

    printf("\n---------------------------\n");

    i = 0;
    soma = 0;
    while (i<=10){
        printf("%d ",i);
        soma += i;
        i+=2;
    } printf("\nSoma: %d\n", soma);
    /*
    1) valor inicial? 11
    2) condição? i <= 14
    3) contador? i++;
    4) quantas vezes o looping foi executado? 4
    5) qual o valor tornou a condição como falsa? 15
    6) saída: 11 12 13 14
    7) soma: 50
    ---------------------------
    1) 4
    2) i>=0
    3) i--;
    4) 5
    5) -1
    6) Saída: 4 3 2 1 0
    7) soma: 10
    ---------------------------
    1) 0
    2) i <=10
    3) i+=2;
    4) 6
    5) 12
    6) Saída: 0 2 4 6 8 10 
    7) soma: 30
    */

    return 0;
}