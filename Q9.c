/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int conversor(int value, int base){
  int resultado = 0;
  int temp = value;
  while(temp>base){
    int resto = temp%base;
    resultado = resultado * pow(10, (int)log10(resto)+1) + resto;
    temp = temp/base;
  }
  return resultado;
}

int main(){

  int value, base, result;
  while(1) {
    scanf("%d", &value);
    if (value == -1){
      printf("Programa Encerrado!");
      break;
    }
    scanf("%d", &base);
    int result;
    result = conversor(value,base);
    printf("Numero %d(10) na base %d = %d(%d)\n", value, base, result, base);
  }


  return 0;
}*/