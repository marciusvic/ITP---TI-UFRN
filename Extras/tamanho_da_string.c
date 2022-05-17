#include <stdio.h>

int _tamanho(int n, char vet[n]){
    int tam = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] != '\0'){
            tam++;
        }
    }
    return tam;
}

int main()
{
    char str1[255] = "string";
    int tamanho = 0;
    tamanho = _tamanho(255, str1);
    printf("%d", tamanho);
    
    return 0;
}
