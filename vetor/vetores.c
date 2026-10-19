#include <stdio.h>
 
int main()
{
    float moeda[] = {1.00, 0.50, 0.25, 0.10, 0.05, 1.50};
    int x[3];
    x[0]=10;
    x[1]=20;
    x[2]=50;
    printf("x[0]=%d, x[1]=%d, x[2]=%d\n",x[0], x[1], x[2]);
    printf("moeda[0] = %.2f, moeda[1] = %.2f, moeda[2] = %.2f, moeda[3] = %.2f, moeda[4] = %.2f, moeda[5] = %.2f\n", moeda[0], moeda[1], moeda[2], moeda[3], moeda[4], moeda[5]);

    for(int i = 0; i < 6; i++){
        printf("Moeda[%d] = %.2f\n", i, moeda[i]+0.25);
    } 
    
    return 0;
}