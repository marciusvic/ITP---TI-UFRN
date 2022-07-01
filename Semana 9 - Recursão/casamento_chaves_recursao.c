#include <stdio.h>

int tam(int n, char str1[n]){
  int aux1 = 0;
  int stop = 0;
  for(int i=0;i<n;i++){
    if(str1[i] == '\n' && stop == 0){
      stop = 1;
      aux1 = i;
    }
  }
  
  return aux1;
}

int casamento_de_chaves(int n, char str1[n], int aux, int i){
    if(i < n){
        if(str1[i] == '}'){
            aux--;
        }
        if(str1[i] == '{'){
            aux++;
        }
        if(aux<0){
            return 0;
        }
        casamento_de_chaves(n, str1, aux, i+1);
    }
    if(aux != 0){
        return 0;
    }
    if(aux == 0){
        return 1;
    }
}


int main(){
    
    char str1[255];
    
    int nivel = 0;
    
    fgets(str1, 255, stdin);
    
    int aux = tam(255, str1);
    
    int verifica_chaves = casamento_de_chaves(tam, str1, nivel, 0);
    
    if(verifica_chaves == 1){
        printf("Expressão Correta!");
    }
    else{
        printf("Expressão Incorreta!");
    }

    return 0;
}