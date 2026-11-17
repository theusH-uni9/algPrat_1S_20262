#include <stdio.h>

int main()
{
    char nome[31];

    printf("Digite um nome: ");
    scanf("%30s", nome);
    printf("\nNome digitado: %s", nome);
    printf("\nPrimeira letra do nome digitado: %c\n", nome[0]);

    int i;
    for(i = 0; nome[i] != '\0'; i++) printf("%d \n", i);

    return 0;
}