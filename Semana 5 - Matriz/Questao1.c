#include <stdio.h>

int main()
{
    int n = 0, l = 0, c = 0, pc = 0, pl = 0;
    scanf("%d", &n);
    
    int vet1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vet1[i]);
    }
    
    scanf("%d %d", &l, &c);
    
    int mat[l][c];
    
    int k = 0;
    
    scanf("%d %d", &pl, &pc);
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            mat[i][j] = vet1[k];
            k++;
        }
    }
    
    printf("%d", mat[pl][pc]);

    return 0;
}
