#include <stdio.h>

void func1(int vet1[], int n1, int vet2[], int n2, int vet3[]){
    if(n1 == n2){
        int n3 = n1+n2, j = 0;
        for (int i = 0; i < n3; i+=2){
            vet3[i] = vet1[j];
            vet3[i+1] = vet2[j];
            j++;
        }
    }
    else if(n1 > n2){
        int j = 0;
        for (int i = 0; i < n2; i++){
            vet3[j] = vet1[i];
            j++;
            vet3[j] = vet2[i];
            j++;
        }
        for (int i = n2; i < n1; i++){
            vet3[j] = vet1[i];
            j++;
        }
    }
    
    else if(n1 < n2){
        int j = 0;
        for (int i = 0; i < n1; i++){
            vet3[j] = vet1[i];
            j++;
            vet3[j] = vet2[i];
            j++;
        }
        for (int i = n1; i < n2; i++){
            vet3[j] = vet2[i];
            j++;
        }
    }
}

int main(){
    
    int n1 = 0, n2 = 0;
    
    scanf("%d", &n1);
    
    int vet1[n1];
    
    for(int i = 0; i < n1; i++){
        scanf("%d", &vet1[i]);
    }
    
    scanf("%d", &n2);
    
    int vet2[n2];
    
    for(int i = 0; i < n2; i++){
        scanf("%d", &vet2[i]);
    }
    
    int n3 = n1 + n2;
    int vet3[n3];
    func1(vet1, n1, vet2, n2, vet3);
    
    printf("Resultado: ");
        for(int i = 0; i < n3; i++){
            printf("%d ", vet3[i]);
        }
    
    return 0;
}