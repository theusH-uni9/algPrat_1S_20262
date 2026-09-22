#include <stdio.h>

int main(){
    
    int vali, valf, rep = 0;

    printf("Insira um valor inicial: ");
    scanf("%d", &vali);

    printf("Insira um valor final: ");
    scanf("%d", &valf);

    if (vali == valf){
        printf("%d\n", vali);
        return 1;
    }
    else if (vali <= valf){
        while (vali <= valf){
            printf("%d\n", vali);
            vali++;
            rep++;
            if (rep == 10) break;
        }
    }
    else{
        while (vali >= valf){
            printf("%d\n", vali);
            vali--;
            rep++;
            if (rep == 10) break;
       }
    }

    return 0;
}