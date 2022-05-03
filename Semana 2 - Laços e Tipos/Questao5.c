#include <stdio.h>
#include <math.h>

int main()  {

    int a = 0, b = 0, c = 0;

    scanf("%d", &a);
    
    int loga = log10(a);
    int fator = pow(10, loga);
    b = a / fator;

    c = a%10;

    printf("O último numero é: %d\n", c);

    printf("O primeiro número é: %d\n", b);

    printf("A soma é: %d\n", b+c);

    return 0;
}
