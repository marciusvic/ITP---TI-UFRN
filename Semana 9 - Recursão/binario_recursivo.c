#include <stdio.h>
#include <stdlib.h>

int bin(int n){
    int x;
    if(n/2!= 0){
        x = n/2;
        bin(x);
        printf("%d", n%2);
    }
    else{
        printf("%d", n%2);
    }
}


int main(){
    int n = 0;
    scanf("%d", &n);
    bin(n);

    return 0;
}
