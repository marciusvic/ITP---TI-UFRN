#include <stdio.h>
struct conta{
    int cod;
    char nome[21];
    int cred;
    int saldo;
};

struct mov{
    int id;
    char data[15];
    int conta_origem;
    int conta_destino;
    int valor;
};


int main()
{
    int n = 0, m = 0;
    
    scanf("%d", &n);
    
    struct conta sequencia[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d ", &sequencia[i].cod);
        scanf("%s", sequencia[i].nome);
        scanf("%d", &sequencia[i].cred);
        scanf("%d", &sequencia[i].saldo);
    }
    
    scanf("%d", &m);
    
    struct mov movimentacao[m];
    
    int comp[m], incomp[m];
    
    for(int i = 0; i < m; i++){
        comp[i] = -1;
        incomp[i] = -1;
    }
    
    for(int i = 0; i < m; i++){
        scanf("%d ", &movimentacao[i].id);
        scanf("%s", movimentacao[i].data);
        scanf("%d", &movimentacao[i].conta_origem);
        scanf("%d", &movimentacao[i].conta_destino);
        scanf("%d", &movimentacao[i].valor);
    }
    
    int aux_comp = 0, aux_incomp = 0;
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(movimentacao[i].conta_origem == sequencia[j].cod){
                if(movimentacao[i].valor < sequencia[j].saldo){
                    comp[aux_comp++] = i;
                    sequencia[j].saldo = sequencia[j].saldo - movimentacao[i].valor;
                    for(int k = 0; k < n; k++){
                        if(movimentacao[i].conta_destino == sequencia[k].cod){
                            sequencia[k].saldo = sequencia[k].saldo + movimentacao[i].valor;
                        }
                    }
                }
                else{
                    incomp[aux_incomp++] = i;
                }
            }
        }
    }
    
    
    
    
    for(int i = 0; i < n; i++){
        printf("%04d ", sequencia[i].cod);
        printf("%s ", sequencia[i].nome);
        printf("%04d", sequencia[i].saldo);
        printf("\n");
    }
    printf("\n");
    
    for(int i = 0; i < m; i++){
        if(incomp[i] != -1){
            printf("%04d ", movimentacao[incomp[i]].id);
            printf("%s ", movimentacao[incomp[i]].data);
            printf("%d", movimentacao[incomp[i]].valor);
            printf("\n");
        }
    }
    printf("\n");
    for(int i = 0; i < m; i++){
        if(comp[i] != -1){
            printf("%04d ", movimentacao[comp[i]].id);
            printf("%s ", movimentacao[comp[i]].data);
            printf("%d", movimentacao[comp[i]].valor);
            printf("\n");
        }
    }
    

    return 0;
}



