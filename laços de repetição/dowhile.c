#include <stdio.h>

int main (){

    int i = 6;

    printf("Saída: ");
    do{
        printf("%d ",i);
        i++;
    }while(i<=5);
    printf("\nValor falso: %d\n",i);

    return 0;
}