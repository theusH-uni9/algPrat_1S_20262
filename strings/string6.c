#include <stdio.h>

int main()
{
    char texto[40];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    for(int i = 0; i < 40; i++) {
        if(texto[i] == '\n') {
            texto[i] = '\0';
            break;
        }
    }
    printf("Texto digitado: %s", texto);
    printf(" - foi aqui!\n");

    return 0;
}