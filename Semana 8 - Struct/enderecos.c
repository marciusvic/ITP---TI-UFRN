#include <stdio.h>
struct end{
    char rua[20];
    int num;
    char bairro[10];
    char cep[10];
    char moradores[10][25];
};

int tamanho(int n, char str[]){
  int count = 0;
  while(count < n && str[count] != '\n'){
    count = count + 1;
  }
  return count;
}

int comp(int n_a, char a[n_a], int n_b, char b[n_b]){
  int cmp = 0;
  int tamanho_a = tamanho(n_a, a);
  int tamanho_b = tamanho(n_b, b);
  if(tamanho_a == tamanho_b){
    cmp = 1;
    for(int i=0;i<tamanho_a;i++){
      if(a[i] != b[i]){
        cmp = 0;
      }
    }
  }
  return cmp;
}

int main(){
    int n = 0;
    
    int aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;
    
    char busca[10][25];
    
    scanf("%d", &n);
    
    struct end sequencia[n];
    
    for(int i = 0; i < n; i++){
        aux1 = 0;
        fgets(sequencia[i].rua, 20, stdin);
        scanf("%d ", &sequencia[i].num);
        fgets(sequencia[i].bairro, 10, stdin);
        fgets(sequencia[i].cep, 10, stdin);
        for(int j = 0; j < 10 && aux1 == 1; j++){
            fgets(sequencia[i].moradores[j], 25, stdin);
            if(sequencia[i].moradores[j][0] == '*'){
                aux1 = 1;
            }
        }
    }
    
    for(int m = 0; m < 10 && aux2 != 1; m++){
        fgets(busca[m], 25, stdin);
        int aux5 = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < sequencia[j].moradores[aux4++][0] != '*'; j++){
                for(int k =0; sequencia[j].moradores[k][0] != '*'; k++){
                    if(comp(25, sequencia[j].moradores[k], 25, busca[aux5++]) == 1){
                    printf("%s\n", sequencia[i].rua);
                    printf("%d\n", sequencia[i].num);
                    printf("%s\n", sequencia[i].bairro);
                    printf("%s\n", sequencia[i].cep);
                    }
                }
                
            }
            aux4 = 0;
            aux5 = 0;
        }
        if(busca[m] == "FINAL"){
            aux2 = 1;
        }
    }
    
    return 0;
}