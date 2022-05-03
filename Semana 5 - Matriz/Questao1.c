#include <stdio.h>

int main()
{
    int n = 0, l = 0, c = 0, l1 = 0, c1 = 0;
    scanf("%d", &n);
    
    int vet1[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &vet1[i]);
    }
    
    scanf("%d %d", &l, &c);
    
    int mat[l][c];
    
    int k = 0;
    
    for(int i = 0; i < l; i++){
        for(int j = 0; i < c; j++){
            mat[i][j] = vet1[k+1];
            k++;
        }
        k++;
    }
    
    scanf("%d %d", &l1, &c1);
    
    printf("%d", mat[l1][c1]);

    return 0;
}
