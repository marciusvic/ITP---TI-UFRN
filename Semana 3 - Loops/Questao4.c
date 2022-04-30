#include <stdio.h>

int somaDivisores(int _valor){
    int resultado = 0;
    for(int i = 1; i < _valor; i++){
        if(_valor % i == 0){
            resultado += i;
        }
    }
    return resultado;
}

int testaAmigos(int _valor1, int _valor2){
    if(somaDivisores(_valor1) == _valor2 && somaDivisores(_valor2) == _valor1){
        return 1;
        
    } else{
        return 0;
    }
}

int verificaPrimo(int _valor){
    int contador = 0;
    for(int i = 1; i <= _valor; i++){
        if(_valor % i == 0){
            contador++;
        }
    }    
    if(contador == 2){
        return 1;
        
    } else{
        return 0;
    }    
}

int main(){
    
    int entrada = 0, backup = 0;
    scanf("%d", &entrada);
    
    while(entrada != 0){
        if(verificaPrimo(entrada) == 1){
            printf("O numero %d e primo!", entrada);
            
        } else{
            printf("O numero %d nao e primo!", entrada);
        }
        
        if(backup == 0){
            printf("\n");
        }
        
        if((testaAmigos(backup, entrada) == 1) && backup != 0){
            printf(" Os numeros <%d,%d> sao amigos!\n", backup, entrada);
            
        } else if((testaAmigos(backup, entrada) == 0) && backup != 0){
            printf(" Os numeros <%d,%d> nao sao amigos!\n", backup, entrada);
        }
        
        backup = entrada;
        scanf("%d", &entrada);
    }
    
    
    
    return 0;
}