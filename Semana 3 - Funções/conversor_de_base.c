#include <stdio.h>

int conv(int value, int base){
    int result = 0;
    int temp = value;
    int mul = 1;
    while(temp > 0){
    result = result + (temp % base) * mul;
    mul = mul * 10;
    temp = temp / base;
    }
    return result;
}

int main(){
  int value = 0, base = 0, result = 0;
  do{
    scanf("%d", &value);
    scanf("%d", &base);
    result = conv(value,base);
    if(value != -1){
    printf("Numero %d(10) na base %d = %d(%d)\n", value, base, result, base);
    }
  }while(value != -1);

    printf("Programa Encerrado!");

  return 0;
}
