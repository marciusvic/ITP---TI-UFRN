#include <stdio.h>
#include <stdlib.h>

void get_rep(int *ptr, int n, double vet[n]){
    int aux;
    for(int i = 0; i < n; i++){
        aux = 0;
        for(int j = i -1; j >= 0; j--){
            if(vet[i] == vet[j]){
                aux = 1;
            }    
        }
        if(aux == 1){
            ++*ptr;
        }
    }
    *ptr = *ptr * 2;
}

double * passa_rep(int rep, int n, double vet1[n]){
    int aux = 0;
    int aux1 = 0;
    int aux2 = 0;
    
    int tamanho = sizeof(double);
    double *vet2 = (double*) malloc((n - rep)*tamanho);
    
    for(int i = 0; i < n; i++){
        aux = 0;
        aux1 = 0;
        for(int j = i; j < n; j++){
            if(vet1[i] == vet1[j] && i != j){
                aux = 1;
            }    
        }
        for(int j = i -1; j >= 0; j--){
            if(vet1[i] == vet1[j]){
                aux1 = 1;
            }    
        }
        if(aux != 1 && aux1 != 1){
            vet2[aux2++] = vet1[i];
        }
    }
    return vet2;
}

int main(){
    
    int n1 = 0;
    scanf("%d", &n1);
    double vet1[n1];
    for(int i = 0; i < n1; i++){
        scanf("%lf", &vet1[i]);
    }
    int rep = 0;
    int *ptr = &rep;
    
    free(*ptr);
    
    get_rep(ptr, n1, vet1);
    double *vet2 = passa_rep(rep, n1, vet1);
    
    printf("[");
    for(int i = 0; i < (n1 - rep); i++){
        printf("%.4lf", vet2[i]);
        if(i != ((n1 - rep) - 1)){
            printf(", ");
        }
    }
    printf("]");
    free(vet2);
}

