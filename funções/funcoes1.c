#include <stdio.h>


void saudacao(){
    // for(int i=0;i<10;i++)
    printf("Olá, bem-vindo a aula de programação C!\n");
}

void exibirMensagem(char nome[]){
    printf("Olá, %s! Bem-vindo!\n", nome);
}

int obterNumero(){
    return 42;
}

int soma(int a, int b){
    return a + b;
}

void epar(int a){
    (a%2 == 0) ? printf("%d é par\n", a) : printf("%d é ímpar\n", a);
}

int main(){
    // for(int i=0;i<10;i++)

    int x = 0; 
    saudacao();
    saudacao();
    // return 0;
    exibirMensagem("Joao");
    printf("Número: %d\n", obterNumero());

    x = soma(7, 9);

    printf("Soma: %d\n", x);
    printf("Soma: %d\n", soma(9, 5));

    epar(2);
    epar(5);

    return 0;
}