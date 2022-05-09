#include <stdio.h>
#include <math.h>

int main()  {  
    double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    
    double ari=0, har = 0, geo = 0, erro_har = 0, erro_geo = 0, erro_med = 0;

    ari = ((n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10)/10);
    
    har = (10/(1/n1 + 1/n2 + 1/n3 + 1/n4 + 1/n5 + 1/n6 + 1/n7 + 1/n8 + 1/n9 + 1/n10));
    
    geo = pow(n1 * n2 * n3 * n4 * n5 * n6 * n7 * n8 * n9 * n10, 1.0/10.0);
    
    erro_har = (har - ari)/ari;
    
    erro_geo = (geo - ari)/ari;
    
    erro_med = ((erro_har + erro_geo)/2)*100;
    
    printf("Média aritmética é %.2lf\n", ari);
    
    printf("Média harmônica é %.2lf\n", har);
    
    printf("Média geométrica é %.2lf\n", geo);
    
    printf("Erro médio é %.2lf %%", erro_med);
    
    
    
    
    return 0;
} 
