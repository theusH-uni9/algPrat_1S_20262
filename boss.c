#include <stdio.h>

int main(){
/*
    int num;

    printf("Insira um número de 1 a 6: ");
    scanf("%d", &num);

    if (num == 1 || num == 2){
        printf("Saí correndo, não da para enfrentar!!!\n");
    } 
    else if(num == 3 || num == 4){
        printf("Se esconda e aguarde reforços!!!\n");
    }
    else if (num == 5 || num == 6){
        printf("Bora enfrentar o boss!!!\n");
    } 
    else {
        printf("Número inválido para o jogo.\n");
    }
*/
    int num;

    printf("Insira um número de 1 a 6: ");
    scanf("%d", &num);

    switch (num){
        case 1: 
        case 2:
        printf("Saí correndo, não da para enfrentar!!!\n");
        break;

        case 3: 
        case 4:
        printf("Se esconda e aguarde reforços!!!\n");
        break;

        case 5: 
        case 6:
        printf("Bora enfrentar o boss!!!\n");
        break;

        default:
        printf("Número inválido para o jogo.\n");
    }

    return 0;
}