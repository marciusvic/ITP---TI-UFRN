#include <stdio.h>

int main(){
    double n1, n2, n3, p1, p2, p3, media;

    scanf("%lf, %lf", &n1, &p1);
    scanf("%lf, %lf", &n2, &p2);
    scanf("%lf, %lf", &n3, &p3);

    media = ((p1*n1) + (p2*n2) + (p3*n3))/(p1+p2+p3);

    if (media<3){
        printf("O aluno foi REPROVADO com média %.2lf", media);
    }
    else if(media>= 7){
        printf("O aluno foi APROVADO com a média %.2lf", media);
    }
    else{
        printf("O aluno ficou em RECUPERAÇÃO com média %.2lf precisando de %.2lf", media, 10-media);
    }


    return 0;
}