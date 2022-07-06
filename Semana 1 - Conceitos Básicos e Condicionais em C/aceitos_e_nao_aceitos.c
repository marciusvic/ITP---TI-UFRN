#include <stdio.h>

int main(){
    
    int A = 0, B = 0, C = 0, D = 0, n = 0, s = 0;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int euimprimi = 0;
    
    if(!(B > C)){
        printf("Valores Não Aceitos condições violadas: 1");
        euimprimi = 1;
    }
    if(!(D > A)){
        if(euimprimi){
            printf(" 2");
        } 
        else {
            euimprimi = 1;
            printf("Valores Não Aceitos condições violadas: 2");    
        }
    }

    if(!((C + D) > (A + B))){
        if(euimprimi){
            printf(" 3");
        } 
        else {
            euimprimi = 1;
            printf("Valores Não Aceitos condições violadas: 3");    
        }
    }

    if(!(C > 0 && D > 0)){
        if(euimprimi){
            printf(" 4");
        } 
        else {
            euimprimi = 1;
            printf("Valores Não Aceitos condições violadas: 4");    
        }
    }
    
    if (euimprimi == 0){
        printf("Valores Aceitos");
    }
    return 0;
}