#include <stdio.h>

int main(){

    int saida = 1, q = 5, caso = 1, numEx = 8, inverso = 0;

    do{
    printf("Qual exercício você quer ver?\n");
    printf("1 - 1a linha;\n2 - 2a coluna;\n3 - 2a linha e 2a coluna;\n");
    printf("4 - Diagonal esquerda-direita;\n5 - Diagonal direita-esquerda;\n");
    printf("6 - As duas diagonais;\n7 - As quatro quinas;\n8 - Moldura.\n");

    scanf("%d", &caso);
    if(caso < 1 || caso > numEx) printf("Valor inválido.\n");
    }while(caso < 1 || caso > numEx); 

    do{
        printf("Qual o tamanho da grade? ");
        scanf("%d", &q);
        if(q<2) printf("Tamanho inválido.\n");
    }while(q<2);

    printf("\n%02d)\n", caso);
    saida = 1;
    for(int y=0;y<q;y++){
        for(int x=0; x<q;x++){
            switch (caso){
                case 1:
                    if(y == 0) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 2:
                    if(x == 1) printf("%02d ", saida);
                    else printf("   "); 
                break;
                case 3:
                    if(x == 1 || y == 1) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 4:
                    if(x == y) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 5:
                    if(x == q-1-y) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 6:
                    if(x == y || x == q-1-y) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 7:
                    if((x == 0 || x == q-1) && (y == 0 || y == q-1)) printf("%02d ", saida);
                    else printf("   ");
                break;
                case 8:
                    if(x == 0 || x == q-1 || y == 0 || y == q-1) printf("%02d ", saida);
                    else printf("   ");
                break;
            }saida++;
        }printf("\n");
    }printf("\n");
    return 0;
}