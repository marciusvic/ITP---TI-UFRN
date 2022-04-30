#include <stdio.h>

int main(){
    int A[3], B[3], C[3], D[3];
    
    for(int i = 0; i < 3; i++){
        scanf("%d", &B[i]);
    }
    
    for(int i = 0; i < 3; i++){
        scanf("%d", &C[i]);
    }
    
    for(int i = 0; i < 3; i++){
        scanf("%d", &D[i]);
    }
    
    for(int i = 0; i < 3; i++){
        A[i] = ((B[i] + C[i]) - 5*D[i]);
    }
    
    printf("A = [%d,%d,%d]", A[0], A[1], A[2]);
    
    return 0;
}