#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n < 0 || n > 255){
        printf("Número %d não suportado!!\n", n);
    }

    else{
        for(int i = 128; i >= 1; i = i/2){
            printf("%d", (n/i) % 2);
        }
    }

    return 0;
}