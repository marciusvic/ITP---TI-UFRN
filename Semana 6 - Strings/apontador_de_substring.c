#include <stdio.h>
#include <string.h>

void passa_minus(int n, char str1[n]){
    for (int i = 0; str1[i]!='\0'; i++){
      if(str1[i] >= 'A' && str1[i] <= 'Z') {
         str1[i] = str1[i] + 32;
      }
    }
}

int tam(int n, char str1[n]){
  int aux1 = 0;
  int stop = 0;
  for(int i=0;i<n;i++){
    if(str1[i] == '\0' && stop == 0){
      stop = 1;
      aux1 = i;
    }
  }
  
  return aux1;
}


int buscar_substring(int n, char str1[n], char str2[n], int pos[n]){
  int n_str1 = (tam(n, str1));
  int n_str2 = (tam(n, str2)- 1);
  int i = 0, j = 0, aux = 0;
  if(n_str1 >= n_str2){
    for(i = 0; i < n_str1; i++){
        if(str1[i] == str2[j]){
            j++;
        }
        else{
            j = 0;
        }
        if(str1[i] == str2[j] && j != 1){
            j++;
        }
        if(j == n_str2){
            j = 0;
            pos[aux++] = i - (n_str2 - 1);
        }
    }
  }
  return aux;
}


int main() {
    char str1[40], str2[40];
    fgets(str1, 40, stdin);
    fgets(str2, 40, stdin);
    
    passa_minus(40, str1);
    passa_minus(40, str2);
    
    int pos[40], rep = buscar_substring(40, str2, str1, pos);
    
    printf("Repetições: %d\n", rep);
    if(rep > 0){
        printf("Posições: ");
        for(int i = 0; i < rep; i++){
            printf("%d ", pos[i]);
        }
    }

    return 0;
}