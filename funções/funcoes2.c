#include <stdio.h>

int g_total = 0;

void acumular(int valor){
    int temp = valor * 2;
    g_total += temp;
}

void looping(int q){
    int x = 0;

    for(x = 0; x <= q; x++) printf("%d ", x);
    printf("\nNúmero %d tornou a condição falsa.\n", x);
}

void looping1(int q, int c){
    int x = 0;

    for(x = 0; x <= q; x+=c) printf("%d ", x);
    printf("\nNúmero %d tornou a condição falsa.\n", x);
}

void looping2(int q, int c){
    int x = 0, i = 0;

    if(q > 0 && c > 0){

    printf("Saída: ");
    for(i = 0; i <= q; i+=c) {
        printf("%d ", i);
        x++;
    }
    printf("\n1) Valor inicial: 0\n");
    printf("2) Condição: i<= %d\n", q);
    printf("3) Contador: i+=%d\n", c);
    printf("4) Executou %d vezes\n", x);
    printf("5) Número %d tornou a condição falsa.\n", x);
    } else {
        printf("Os valores precisam ser maiores que 0.\n");
    }

}

int main(){
    int x = 5;

    acumular(x);
    acumular(3);
    printf("Total: %d\n", g_total);

    looping(4);
    looping1(10, 2);
    looping2(10, 3);
    looping2(-10, 3);
    // printf("%d", temp);
    return 0;
}