#include <stdio.h>

int main(){
    /*
    int alvo;

    // Tabuada específica
    printf("Digite um número para saber a tabuada: ");
    scanf("%d", &alvo);

    printf("--- Tabuada do %d ---\n", alvo);
    for(int i=0;i<=10;i++){
        printf("%d x %d = %d\n", alvo, i, alvo*i);
    }
*/  
    // Todas do 1 ao 10
    for(int j=1;j<=10;j++){
        printf("--- Tabuada do %d ---\n", j);
            for(int i=0;i<=10;i++){
            printf("%d x %d = %d\n", j, i, j*i);
        }
    }
    return 0;
}