#include <stdio.h>

int main(){
    int x = 10;
    float nota = 7.8;
    float moeda[] = {1.00, 0.50, 0.25, 0.10, 0.05, 1.50, 2.25, 2.50, 3.00};
    float notas[5];
 
    printf("char   : %zu byte\n", sizeof(char));
    printf("int    : %zu bytes\n", sizeof(int));
    printf("double : %zu bytes\n", sizeof(double));
    printf("x      : %zu bytes\n", sizeof(x));
    printf("nota   : %zu bytes\n", sizeof(nota));
    printf("notas  : %zu bytes\n", sizeof(notas));
    printf("moeda  : %zu bytes\n", sizeof(moeda));

    int tam = sizeof(moeda)/sizeof(moeda[0]);

    for(int i=0; i<tam; i++) printf("Moeda[%d] = %.2f\n", i, moeda[i]);

    return 0;
}