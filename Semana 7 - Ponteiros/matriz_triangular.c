#include <stdio.h>  
#include <stdlib.h>

int **mat_tri(int n){
    int k = 0;
    for (int i = 1; i <= n; i++){  
        for (int j = 1; j <= i; j++){
            k++;
        }    
    }
    int **mat;
    mat = (int **)calloc(n, sizeof(int *));
    for(int i  = 0; i < n; i++){
    mat[i] = (int *)calloc(n, sizeof(int));
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mat[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            mat[i][j] = k--;
        }
    }
    return mat;
}


int main(){  
    int n, k = 0;   
   
    scanf("%d", &n); 
    int **mat = mat_tri(n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 0){
                printf("   ");
            }
            else{
                printf("%2d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    
    for(int i  = 0; i < n; i++){
        free(mat[i]);
    }
    free(mat);
    
    return 0;
} 