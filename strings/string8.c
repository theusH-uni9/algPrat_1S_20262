#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    char nome[40];

    printf("Idade: ");
    scanf("%d", &idade);
    getchar();                      // consome o \n que sobrou do scanf

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("%s tem %d anos\n", nome, idade);

    return 0;
}