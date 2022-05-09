#include <stdio.h>

int main() {
    int n = 0, maior, menor;
    
    printf("esse programa analisa um vetor e diz qual seu menor elemento, e qual seu maior elemento\n");
    
    printf("digite o tamanho do vetor\n");
    
    scanf("%d", &n);
    
    int vet[n];
    
    printf("digite os valores que quer analisar\n");
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    
    for(int i = 0; i < n; i++){
        if(maior < vet[i]){
            maior = vet[i];
        }
        if(menor > vet[i]){
            menor = vet[i];
        }
    }
    
    printf("entre os números:");
    
    for(int i = 0; i < n; i++){
        printf(" %d", vet[i]);
        if(i != (n-1)){
            printf(",");
        }
    }
    
    printf("\n");

    
    printf("o menor valor digitado foi %d, e o maior valor digitado foi %d \n", menor, maior);
    
    return 0;
}