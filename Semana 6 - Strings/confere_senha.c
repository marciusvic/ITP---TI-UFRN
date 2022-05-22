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

int veri_char(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int aux = 0;
    for(int i = 0; i < n_str1; i++){
        if(str1[i] == '!'){
            aux++;
        }
        if(str1[i] == '#'){
            aux++;
        }
    }
    if(aux >= 1){
        return 1;
    }
    else{
        return 0;
    }
}

int veri_maiu(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z') {
            aux++;  
        }
    }
    if(aux >= 3){
        return 1;
    }
    else{
        return 0;
    }
}

int veri_minu(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= 'a' && str1[i] <= 'z') {
            aux++;  
        }
    }
    if(aux >= 3){
        return 1;
    }
    else{
        return 0;
    }
}

int veri_num(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= '0' && str1[i] <= '9') {
            aux++;  
        }
    }
    if(aux >= 2){
        return 1;
    }
    else{
        return 0;
    }
}

void verificar_senha(int n, char str1[n]){
    int etp1 = veri_char(n, str1);
    int etp2 = veri_maiu(n, str1);
    int etp3 = veri_minu(n, str1);
    int etp4 = veri_num(n, str1);
    
    if(etp1 == 1 && etp2 == 1 && etp3 == 1 && etp4 == 1){
        printf("verdadeiro");
    }
    else{
        printf("falso");  
    }
    
}

int main(){
    char senha[21];
    
    fgets(senha, 21, stdin);
    
    verificar_senha(21, senha);
    return 0;
}


























