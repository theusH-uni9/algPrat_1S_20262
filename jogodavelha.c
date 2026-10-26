#include <stdio.h>

int main(){

    int vez = 0, c1, c2, mapa[3][3] = {
        {0},
        {0},
        {0}
    };

// printf("%d", mapa[0][0]);
    do{
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                switch (mapa[i][j])
                {
                case 0:
                    printf("* ");
                    break;
                case 1:
                printf("X ");
                    break;
                case 2:
                printf("O ");
                    break;
                };
            }
            printf("\n");
        }

        do{
            printf("Onde vc quer jogar: ");
            scanf("%d %d", &c1, &c2);

            if((c1 > 2 || c1 < 0) || (c2 > 2 || c2 < 0)) printf("Coordenadas inválidas.\n");
            

        }while((c1 > 2 || c1 < 0) || (c2 > 2 || c2 < 0));

        mapa[c1][c2] = (vez == 0) ? 1 : 2;
        vez = (vez == 0) ? 1 : 0;
    }while(1<2);


    return 0;
}