#include <stdio.h>

int main() {
    int n = 0;
    
    scanf("%d", &n);
    
    int A[n], B[n], C[n];
    if(n > 10){
        printf("Muitos elementos");
    }
    else{
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &B[i]);
        }
        for(int i = 0; i < n; i++){
            printf("%d ", A[i]+B[i]);
        }
    }
    
    
    return 0;
}