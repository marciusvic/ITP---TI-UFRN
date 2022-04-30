#include <stdio.h>

// retorna verdadeiro se numero é divisível por divisor e falso em caso contrário
int testa_divisor(int numero, int divisor){
    if((numero % divisor) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

// retorna a soma dos divisores de value no intervalo [1,value])
int soma_divisores(int value){
    int somaDivisores = 0;
    for(int i = 1; i < value; i++){
        if(testa_divisor(value, i) == 1)
            somaDivisores += i;
    }
    return somaDivisores;
}

int testa_amigos(int n1, int n2){
    if((soma_divisores(n1) == n2) && (soma_divisores(n2) == n1)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int A, B, C, D;
    int numAmigos = 0;
    scanf("%d %d", &A, &B);
    scanf("%d %d", &C, &D);

    for(int i = A; i <= B; i++){
        for(int j = C; j <= D; j++){
            if((testa_amigos(i, j) == 1) && (i != j)){
                printf("O %d possui um amigo!\n", i);
                numAmigos++;
            }
        }
    }
    if(numAmigos == 0){
        printf("Os intervalos nao apresentam amigos!\n");
    }

    return 0;
}