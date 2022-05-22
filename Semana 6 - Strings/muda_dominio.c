#include <stdio.h>
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
  
  return aux1-1;
}


int busca_char1(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int aux = 0;
    for(int i = 0; i < n_str1; i++){
        if(str1[i] == '@'){
            aux = i;
        }
    }
    return aux;
}

int busca_char2(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int aux = 0;
    for(int i = 0; i < n_str1; i++){
        if(str1[i] == '.'){
            aux = i;
            break;
        }
    }
    return aux;
}

int sub_dom(int nG, int nP, char str1[nG], char str2[nP], char str3[nG]){
    int aux1 = busca_char1(nG, str1);
    int aux2 = busca_char2(nG, str1);
    
    int tam_str2 = tam(nP, str2);
    int tam_str1 = tam(nG, str1);
    
    for(int i = 0; i <= aux1; i++){
        str3[i] = str1[i]; 
    }
    
    int j = 0, pos = 0;
    for(int i = (aux1 + 1) ; j <= tam_str2; i++){
        str3[i] = str2[j++];
        pos = i;
    }
    int tam_str3 = tam(nG, str3);
    int aux4 = 0;
    for(int i = aux2; i <= tam_str1 + 1; i++){
        str3[tam_str3+1] = str1[i];
        aux4 = tam_str3;
        tam_str3++;
    }
    return aux4;
}



int main(){
    
    char str1[101], str2[21], str3[101];
    int aux = 0;
    
    for(int i = 0; i < 20; i++){
        printf("Digite o email que deseja substituir o domínio:\n");
        fgets(str1, 101, stdin);
        printf("Digite o novo domínio:\n");
        fgets(str2, 21, stdin);
        printf("o email %s foi modificado para: ",str1);
        aux = sub_dom(101, 21, str1, str2, str3);
        for(int j = 0; j < aux; j++){
            printf("%c", str3[j]);
        }
        printf("\n");
    }
    
    
    return 0;
}