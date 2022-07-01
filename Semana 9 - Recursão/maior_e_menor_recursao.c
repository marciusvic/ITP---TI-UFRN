#include <stdio.h>

void buscar(int n1, int n2, int mat[n1][n2], int i, int j, int *menor, int *maior){
    *menor = mat[0][0];
    *maior = mat[0][0];
    if(i < n1){
        if(j < n2){
            if(*maior < mat[i][j]){
                *maior = mat[i][j];
            }
            if(*menor > mat[i][j]){
                *menor = mat[i][j];
            }
            buscar(n1, n2, mat, i, ++j, menor, maior);
            
            
            if (j < (n2-1)){
                j = 0;
                buscar(n1, n2, mat, ++i, j, menor, maior);
            }
        }
    }
}


int main()
{
    int n1 = 0, n2 = 0;
    
    scanf("%d %d", &n1, &n2);
    
    int mat[n1][n2];
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    int debug1 = 0;
    int debug2 = 0;
    int *maior = &debug1;
    int *menor = &debug2;
    
    buscar(n1, n2, mat[n1][n2], 0, 0, menor, maior);
    
    printf("Menor: %d\nMaior:%d", *menor, *maior);

    return 0;
}