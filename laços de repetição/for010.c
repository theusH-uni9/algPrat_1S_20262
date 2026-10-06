#include <stdio.h>

int main(){
    // Declaração interna
    /*
    for(int i=0;i<=11;i++) {
        if (i>10){
            printf("\n");
            printf("Falso: %d",i);
        } else {
            printf("%d ",i);
        }

    }
    printf("\n\n");
    */

    // Declaração externa
    int falso = 0;
    for(int i=0;i<=10;i++) {
        falso = i+1;
        if(i < 3 || i > 7){
            // break;
            continue;
        } 
        printf("%d ",i);

    }
    printf("\n");
    // printf("\nFalso: %d \n",falso);
/*
    for(int i=0;i<=10;i+=2) printf("%d ",i);
    printf("\n");

    for(int i=0;i<=10;i++) if(i%2 == 0) printf("%d ",i);
    printf("\n");
*/
    return 0;
}