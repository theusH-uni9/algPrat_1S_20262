#include <stdio.h>

int main(){
    int i;
    for (i=0; i<5; i++){
        printf("%d\n", i);
    }
    printf("%d\n", i);

    int x,y;

    printf("-- GRID --\n");
    for (x = 4; x>=0; x--){
        for (y = 4; y>=0; y--){
            printf("(%d, %d) ",x,y);
        }
        printf("\n");
    }

    return 0;
}