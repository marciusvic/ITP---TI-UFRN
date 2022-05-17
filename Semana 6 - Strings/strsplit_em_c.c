#include <stdio.h>
#include <strings.h>

void strsplit(int n, char str1[n], char str2[n], char unk){
    int aux1 = 0, aux2 = 0;
    for(int i = 0; i < n; i++){
        if(str1[i] != unk){
            aux1 = i;
            break;
        }
    }
    for(int i = aux1; i < n; i++){
        if(str1[i] == unk){
        str1[i] = '\n';
        }
    }
    for(int i = aux1; i < n; i++){
        str2[aux2++] = str1[i]; 
    }
}

int main(){
    char str1[50],str2[50], unk;
    fgets(str1, 50, stdin);
    scanf("%c", &unk);
    
    strsplit(50, str1, str2, unk);
    
    printf("%s", str2);
    
    return 0;
}