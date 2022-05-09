#include <stdio.h>

int main(void){
    int matriz_m[3][3];
    int n_matriz[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &matriz_m[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            n_matriz[j][2 - i] = matriz_m[i][j];
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d ", n_matriz[i][j]);
        }
        printf("\n");
    }
}
