#include <stdio.h>


int main(){
    double T = 0;
    char t1, t2, t3;

    scanf("%lf %c %c %c", &T, &t1, &t2, &t3);

    if(t1 == 'C' && t3 =='K'){
        T = T + 273.15;
        printf("%.2lf", T);
    }
    else if(t1 == 'K' && t3 =='C'){
        T = T - 273.15;
        printf("%.2lf", T);
    }
    else if(t1 == 'C' && t3 =='F'){
        T = (((T/5)*9)+32);
        printf("%.2lf", T);
    }
    else if(t1 == 'F' && t3 =='C'){
        T = (((T-32)/9)*5);
        printf("%.2lf", T);
    }
    else if(t1 == 'K' && t3 =='F'){
        T = ((((T-273)/5)*9)+32);
        printf("%.2lf", T);
    }
    else if(t1 == 'F' && t3 =='K'){
        T = ((((T-32)/9)*5)+273);
        printf("%.2lf", T);
    }
    return 0;
}
