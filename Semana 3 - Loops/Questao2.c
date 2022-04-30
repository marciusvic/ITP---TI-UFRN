#include <stdio.h>

void screenVerify(double aIEx, double aIEy, double aSDx, double aSDy, double bIEx, double bIEy, double bSDx, double bSDy){

    if((aIEx < bIEx) && (aIEy < bIEy) && (aSDx > bSDx) && (aSDy > bSDy)){
        printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", aIEx, aIEy, aSDx, aSDy, bIEx, bIEy, bSDx, bSDy);
    } 
    else if((aIEx > bIEx) && (aIEy > bIEy) && (aSDx < bSDx) && (aSDy < bSDy)){
        printf("(<%.2lf,%.2lf>,<%.2lf,%.2lf>) contem (<%.2lf,%.2lf>,<%.2lf,%.2lf>).\n", bIEx, bIEy, bSDx, bSDy, aIEx, aIEy, aSDx, aSDy);
    }
    else{
        printf("Nao posso afirmar!\n");
    }
}

int main(){
    double TelaIEx, TelaIEy, TelaSDx, TelaSDy;
    double RetIEx = 1, RetIEy = 1, RetSDx = 1, RetSDy = 1;

    scanf("%lf %lf %lf %lf", &TelaIEx, &TelaIEy, &TelaSDx, &TelaSDy);
    
    int x = 1;
    
    while(x == 1){
        scanf("%lf %lf %lf %lf", &RetIEx, &RetIEy, &RetSDx, &RetSDy);

        if((RetIEx == 0) && (RetIEy == 0) && (RetSDx == 0) && (RetSDy == 0)){
            break;
        }
        
        screenVerify(TelaIEx, TelaIEy, TelaSDx, TelaSDy, RetIEx, RetIEy, RetSDx, RetSDy);  
    }
    
    return 0;
}