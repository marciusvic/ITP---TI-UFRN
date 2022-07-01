#include <stdio.h>

int seq(int n){
    printf("%d ", n);
    if(n == 1){
        return 1;
    }
    else{
        if(n % 2 == 0){
            seq(n/2);
        }
        else{
            if(n % 2 != 0){
                seq((n*3)+1);
            }
        }
    }
}


int main(){
    
    int n = 0;
    
    scanf("%d", &n);
    
    seq(n);
}