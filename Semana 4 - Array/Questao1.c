#include <stdio.h>

int main()
{
    int vet[20];

    for(int i = 0; i < 20; i++){
        scanf("%d", &vet[i]);
    }

    int n1 = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 3 == 0){
            n1++;
        }
    }
    int A[n1];
    int j = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 3 == 0){
            A[j] = vet[i];
            j++;
        }
    }

    int n2 = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 4 == 0){
            n2++;
        }
    }
    int B[n2];
    j = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 4 == 0){
            B[j] = vet[i];
            j++;
        }
    }

    int n3 = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 3 != 0 && vet[i] % 4 != 0){
            n3++;
        }
    }
    int C[n3];
    j = 0;
    for(int i = 0; i < 20; i++){
        if(vet[i] % 3 != 0 && vet[i] % 4 != 0){
            C[j] = vet[i];
            j++;
        }
    }

    printf("a)");
    for(int i = 0; i < n1; i++){
        printf("%d", A[i]);
        if(i != (n1-1)){
            printf(",");
        }
    }

    printf("\n");

    printf("b)");
    for(int i = 0; i < n2; i++){
        printf("%d", B[i]);
        if(i != (n2-1)){
            printf(",");
        }
    }

    printf("\n");

    printf("c)");
    for(int i = 0; i < n3; i++){
        printf("%d", C[i]);
        if(i != (n3-1)){
            printf(",");
        }
    }
    return 0;
}
