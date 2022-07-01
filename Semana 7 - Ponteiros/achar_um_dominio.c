#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tam(int n, char str1[n]){
  int aux1 = 0;
  int stop = 0;
  for(int i=0;i<n;i++){
    if(str1[i] == '\0' && stop == 0){
      stop = 1;
      aux1 = i;
    }
  }
  
  return aux1-2;
}

int busca_char1(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int aux = 0;
    for(int i = 0; i < n_str1; i++){
        if(str1[i] == '@'){
            aux = i;
            break;
        }
    }
    return aux;
}

int busca_char2(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int aux = 0;
    for(int i = busca_char1(n, str1); i < n_str1; i++){
        if(str1[i] == '.'){
            aux = i;
            break;
        }
    }
    return aux;
}

void pega_dom(int n, char str1[n], char str2[n]){
    int aux1 = busca_char1(n, str1);
    int aux2 = busca_char2(n, str1);
    int j = 0;
    for(int i = aux1 + 1; i < aux2; i++){
        str2[j] = str1[i];
        j++;
    }
    str2[j] = '\0';
    return str2;
}

int main(){
    
    char str1[51], str2[51];
    
    
    for(int i = 0; i < 20; i++){
        fgets(str1, 51, stdin);
        if((str1[0] == 'F' || str1[0] == 'f') && (str1[1] == 'I' || str1[1] == 'i') && (str1[2] == 'M' || str1[2] == 'm')){
            i = 20;
        }
        else if (i < 20){
        pega_dom(51, str1, str2);
        printf("%s\n", str2);
        }
    }
    
    
    return 0;
}