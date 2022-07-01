#include <stdio.h>

struct aluno{
  char nome[64];
  double nota;
};

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

struct aluno ler_struct(int n, struct aluno turma[n]){
    char buffer[5];
    for(int i = 0; turma[i].nome[0] != '*' && i < n; i++){
        scanf("%s", turma[i].nome);
        if(turma[i].nome[0] == '*'){
            i = n;
        }
        if(i < n){
            scanf("%lf", &turma[i].nota);
        }
    }
}

int d_viagem(int n, struct aluno turma[n]){
    double nota = 0;
    int aux = 0;
    for(int i = 0; turma[i].nome[0] != '*' && i < n; i++){
        aux = i;
    }
    for(int i = 0; i < aux; i++){
        nota = nota + turma[i].nota;
    }
    nota = nota/(aux);
    
    if(nota > 8){
        return 1;
    }
    else{
        return 0;
    }
    
}

float d_melhor(int n, struct aluno turma1[n], struct aluno turma2[n], char nome[n]){
    float maior_nota = turma1[0].nota;
    int aux = 0;
    for(int i = 0; turma1[i].nome[0] != '*' && i < n; i++){
        if(turma1[i].nota > maior_nota){
            for(int j = 0; j < tam(64, turma1[i].nome); j++){
                nome[j] = turma1[i].nome[aux++];
            }
            maior_nota = turma1[i].nota;
        }
        aux = 0;
    }
    
    for(int i = 0; turma2[i].nome[0] != '*' && i < n; i++){
        if(turma2[i].nota > maior_nota){
            for(int j = 0; j < tam(64, turma2[i].nome); j++){
                nome[j] = turma2[i].nome[aux++];
            }
            maior_nota = turma2[i].nota;
        }
        aux = 0;
    }
    
    return maior_nota;
}

int main(){
    char m_aluno[20];
    float maior_nota = 0;
    struct aluno turma_A[20];
    
    struct aluno turma_B[20];
    
    ler_struct(20, turma_A);
    
    ler_struct(20, turma_B);
    
    maior_nota = d_melhor(20, turma_A, turma_B, m_aluno);
    
    if(d_viagem(20, turma_A) == 0 && d_viagem(20, turma_B) == 0){
        printf("Nenhuma das turmas viaja...\n");
    }
    else{
        if(d_viagem(20, turma_A) == 1){
        printf("Viagem para turma A\n");
        }
        if(d_viagem(20, turma_B) == 1){
            printf("Viagem para turma B\n");
        }
    }
    if(maior_nota > 8){
        printf("%s ganhou viagem e ingresso no parque!\n", m_aluno);
        printf("Nota: %.2lf", maior_nota);
        }
        else if(maior_nota < 8){
            printf("Ninguem ganhou viagem e ingresso no parque...\n");
        }
    
    return 0;
}