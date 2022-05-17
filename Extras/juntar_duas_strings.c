#include <stdio.h>

void atr(int n1, int n2, char vet1[n1], char vet2[n2]){
    int aux = 0;
    for(int i = 0; i < n1; i++){
        if(vet1[i] == '\0'){
            vet1[i] = vet2[aux++];
        }
    }
}

int main()
{
    char str1[255] = "vou juntar essa frase";
    char str2[200] = " com essa frase";
    
    atr(255, 200, str1, str2);
    
    printf("%s", str1);
    
    return 0;
}
