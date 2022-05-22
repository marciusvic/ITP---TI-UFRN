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

int veri_maiu(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= 'A' && str1[i] <= 'Z') {
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

int veri_minu(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= 'a' && str1[i] <= 'z') {
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

int veri_num(int n, char str1[n]){
    int aux = 0;
    for (int i = 0; str1[i]!='\0'; i++){
        if(str1[i] >= '0' && str1[i] <= '9') {
            aux++;  
        }
    }
    if(aux = 11){
        return 1;
    }
    else{
        return 0;
    }
}

int veri_cpf(int n, char str1[n]){
    int n_str1 = tam(n, str1);
    int etp1 = veri_num(n, str1); //1
    int etp2 = veri_minu(n, str1);//1
    int etp3 = veri_maiu(n, str1);//1
    if(etp1 == 1 && etp2 == 0 && etp3 == 0 && n_str1 == 14){
        if(str1[3] == '.' && str1[7] == '.' && str1[11] == '-'){
            return 1;
        }
    }
    else{
        return 0;
    }
}


int main(){
    char cpf[21];
    
    fgets(cpf, 21, stdin);
    
    int veri = veri_cpf(21, cpf);
    
    if(veri == 1){
        printf("verdadeiro");
    }
    else{
        printf("falso");
    }

    return 0;
}


























