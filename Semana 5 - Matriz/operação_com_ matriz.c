#include <stdio.h>

void r_m(int l, int c, int mat[l][c]){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

int mult_mat(int l1, int c1, int l2, int c2, int mat1[l1][c1], int mat2[l2][c2], int mat3[l1][c2]){
    int aux = 0;
    if(c1== l2) {
        for(int i = 0; i < l1; i++) {
		    for(int j = 0; j < c2; j++) {
			    mat3[i][j] = 0;
			    for(int k = 0; k < c2; k++){
				    aux +=  mat1[i][k] * mat2[k][j];
			    }
			    mat3[i][j] = aux;
			    aux = 0;
		    }
	    }
	    return 0;
    }
    else{
        return 1;
    }
}

int somar_mat(int l1, int c1, int l2, int c2, int mat1[l1][c1], int mat2[l2][c2],int mat3[l1][c1]){
    if(l1 == l2 && c1 == c2){
        for (int i = 0; i < l1; i++){
            for (int j = 0; j < c1; j++){ 
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            } 
        }
        return 0;
    }
    else{
        return 1;
    }
}    


int main(){
    int c_um = 0;
    int c_dois = 0;
    
    int l1 = 0, c1 = 0;
    
    scanf("%d %d", &l1, &c1);
    
    int mat1[l1][c1];
    
    r_m(l1, c1, mat1);
    
    int l2 = 0, c2 = 0;
    
    scanf("%d %d", &l2, &c2);
    
    int mat2[l2][c2];
    
    r_m(l2, c2, mat2);
    
    int l3 = 0, c3 = 0;
    
    scanf("%d %d", &l3, &c3);
    
    int mat3[l3][c3];
    
    r_m(l3, c3, mat3);
    
    int l4 = 0, c4 = 0;
    
    scanf("%d %d", &l4, &c4);
    
    int mat4[l4][c4];
    
    r_m(l4, c4, mat4);
    
    int r1[l1][c2], r2[l2][c3], r3[l3][c4];
    
    int c_mult1 = 0, c_mult2 = 0, c_mult3 = 0, c_soma1 = 0,c_soma2 = 0;
    
    c_mult1 = mult_mat(l1, c1, l2, c2, mat1, mat2, r1);
    c_mult2 = mult_mat(l2, c2, l3, c3, mat2, mat3, r2);
    c_mult3 = mult_mat(l3, c3, l4, c4, mat3, mat4, r3);
    
    int s1[l1][c3], s2[l1][c4];
    
    c_soma1 = somar_mat(l1, c2, l2, c3, r1, r2, s1);
    c_soma2 = somar_mat(l1, c3, l1, c4, s1, r3, s2);
    
    int print = 0;
    
    if(c_mult1 == 1 || c_mult2 == 1 || c_mult3 == 1){
        printf("Valor de alguma das multiplicações não pode ser calculado");
        print = 1;
    }
    else if((c_soma1 == 1 || c_soma2 == 1) && print == 0){
        printf("Valor da soma não pode ser calculado");
    }
    else{
        for (int i = 0; i < l1; i++){
            for (int j = 0; j < c4; j++){
                printf("%d ", s2[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}