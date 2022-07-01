#include <stdio.h>


int fat(int n){
    
    int resultado = 0;
    
    if(n == 0){
        resultado = 1;
    }
    else{
        resultado = n * fat( n - 1);
    }
    
    return resultado;
}



int main(){
    
    printf("%d", fat(5));
    

    return 0;
}
