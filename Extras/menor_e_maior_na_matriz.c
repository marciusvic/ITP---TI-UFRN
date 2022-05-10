// Obter o maior e o menor valor de uma matriz
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 0, maior, menor;
    
    printf("esse programa analisa uma matriz e diz qual seu menor elemento, e qual seu maior elemento.\n");
    
    printf("digite o tamanho da matriz(linhas e colunas):\n");
    
    scanf("%d %d", &n1, &n2);
    
    int mat[n1][n2];
    
    printf("digite os valores que quer analisar(lembrando que você deve entrar com %d valores):\n", n1*n2);
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    maior = mat[0][0];
    menor = mat[0][0];
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(maior < mat[i][j]){
                maior = mat[i][j];
            }
            if(menor > mat[i][j]){
                menor = mat[i][j];
            }
        }
    }

    printf("entre os números:\n");
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            printf(" %d", mat[i][j]);
            printf(",");
        }
        printf("\n");
    }
    

    printf("\n");
    
    printf("o menor valor digitado foi %d, e o maior valor digitado foi %d. \n", menor, maior);
    
    return 0;
}