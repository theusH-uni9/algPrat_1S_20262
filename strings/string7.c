#include <stdio.h>

int main()
{
    char texto[40];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Com printf: %s", texto);
    puts("Com puts:");
    puts(texto);
    printf("Funciona?\n");
    return 0;
}