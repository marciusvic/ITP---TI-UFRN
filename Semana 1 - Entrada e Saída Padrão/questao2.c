#include <stdio.h>


int main(){
    char t1, t2, t3;

    scanf("%c %c %c", &t1, &t2, &t3);

    if(t2 == '&'){
        printf("-------\n");
        printf("|%c|%c|r|\n", t1, t3);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|0|\n");
        printf("+-+-+-+\n");
        printf("|1|0|0|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
        printf("-------");

    }
    else if(t2 == '^'){
        printf("-------\n");
        printf("|%c|%c|r|\n", t1, t3);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|0|\n");
        printf("-------");

    }
    else if(t2 == '|'){
        printf("-------\n");
        printf("|%c|%c|r|\n", t1, t3);
        printf("+-+-+-+\n");
        printf("|0|0|0|\n");
        printf("+-+-+-+\n");
        printf("|0|1|1|\n");
        printf("+-+-+-+\n");
        printf("|1|0|1|\n");
        printf("+-+-+-+\n");
        printf("|1|1|1|\n");
        printf("-------");

    }
    return 0;
}
