#include <stdio.h>
#include <stdlib.h>

void get_valor(int *menor, int *maior, int n, int vet[n]){
    
    *maior = vet[0];
    *menor = vet[0];
    
    for(int i = 0; i < n; i++){
        if(*maior < vet[i]){
            *maior = vet[i];
        }
        if(*menor > vet[i]){
            *menor = vet[i];
        }
    }
}

int main() {
    int n = 0;
    
    scanf("%d", &n);
    
    int vet[n];
    
    for(int i = 0; i < n; i++){
        vet[i] = rand()%201;
    }
    int debug1 = 0;
    int debug2 = 201;
    int *maior = &debug1;
    int *menor = &debug2;
    
    get_valor(menor, maior, n, vet);
    
    printf("entre os números:");
    
    for(int i = 0; i < n; i++){
        printf(" %d", vet[i]);
        if(i != (n-1)){
            printf(",");
        }
    }

    printf("\n");
    
    printf("o menor é %d, e o maior é %d \n", *menor, *maior);
    
    return 0;
}
