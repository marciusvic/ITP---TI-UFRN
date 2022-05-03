#include <stdio.h>

int main()
{
    int n = 0;
    char c;

    scanf("%d %c", &n, &c);

    for(int i = 1; i <= (n-1)/2; i++){
        for(int j = 1; j <= (n-1)/2; j++){
            if(j<i){
                printf(" ");
            }
            else if(j == i){
                printf("%c", c);
            }
            else if (j > i){
                printf(" ");
            }
        }
        for(int j = (n-1)/2; j >= 1; j--){
            if(j<i){
                printf(" ");
            }
            else if(j == i){
                printf("%c", c);
            }
            else if (j > i){
                printf(" ");
            }
        }
        printf("\n");
    }
    //
    for(int i = (n-1)/2; i >= 1; i--){
        for(int j = 1; j <= (n-1)/2; j++){
            if(j<i){
                printf(" ");
            }
            else if(j == i){
                printf("%c", c);
            }
            else if (j > i){
                printf(" ");
            }
        }
        for(int j = (n-1)/2; j >= 1; j--){
            if(j<i){
                printf(" ");
            }
            else if(j == i){
                printf("%c", c);
            }
            else if (j > i){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}