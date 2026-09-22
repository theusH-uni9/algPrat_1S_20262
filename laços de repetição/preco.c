#include <stdio.h>

int main(){

    float p, s;

    do{
        printf("Digite o preço do produto: ");
        scanf("%f", &p);
        s += p;

    } while (p != 0);

    printf("Valot total: R$%.2f\n", s);

    return 0;
}