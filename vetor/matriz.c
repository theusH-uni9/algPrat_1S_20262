#include <stdio.h>

int main()
{
    enum { L = 4, C = 4 };
    int matriz[L][C] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {1, 9, 2, 6},
        {4, 8, 5, 3}
    };
    int res;
/*
    printf("matriz[3][1] = %d\n", matriz[3][1]);
    printf("matriz[3][2] = %d\n", matriz[3][2]);

    res = matriz[3][1];
    matriz[3][1] = matriz[3][2];
    matriz[3][2] = res;

    printf("matriz[3][1] = %d\n", matriz[3][1]);
    printf("matriz[3][2] = %d\n", matriz[3][2]);
*/
printf("Todos os valores\n");
for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

printf("\nSegunda linha\n");
for(int i = 0; i<C; i++) printf("%d ", matriz[1][i]);
printf("\n");

printf("\nTerceira coluna\n");
for(int i = 0; i<L; i++) printf("%d\n", matriz[i][2]);
printf("\n");

int somal = 0, somac = 0;

for(int i = 0; i<C; i++) somal += matriz[0][i];
printf("Soma primeira linha: %d\n", somal);

for(int i = 0; i<C; i++) somac += matriz[i][0];
printf("Soma primeira coluna: %02d\n", somac);


    return 0;
}