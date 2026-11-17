#include <stdio.h>

int main(){
    for (int i = 32; i<= 255; i++){
        printf("%03d -> '%c'\n", i, i);
    }

    return 0;
}

