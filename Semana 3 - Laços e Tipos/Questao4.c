#include <stdio.h>
#include <stdlib.h>

int main () {


    int n, inv, aux;
    scanf("%d", &n);


    inv = 0;
    aux = n;

    while(aux > 0){
    inv = (inv*10) + (aux % 10);
    aux = aux / 10;
    }


    if(n == inv && (n%2) == 1){
        printf("%d é Palíndromo e impar.", n);
    }
    else if(n != inv && (n%2) == 1){
        printf("%d não é Palíndromo e impar.", n);
    }
    else if(n == inv && (n%2) == 0){
        printf("%d é Palíndromo e par.", n);
    }
    else{
        printf("%d não é Palíndromo e par.", n);
    }

    return 0;

}
