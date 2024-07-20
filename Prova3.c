/*#include <stdio.h>

float calculoA(float A, float B, float C){
  float media;
  
  media = ((A * 4 ) + ( B * 5) + (C * 6 )) / 15;
  
  return media;
}

float calculoN(float A, float B, float C){
  float media;

  media = (A + B + C) / 3;
  
  return media;
}

void tipo(char tipo, float A, float B,float C){
  float media;

  if (tipo == 'A'){
    media = calculoA(A,B,C);
    printf("%.2f",media);
  }

  if (tipo == 'N'){
    media = calculoN(A,B,C);
    printf("%.2f",media);
  }
}

int main(){
  char tipoo;
  float n1,n2,n3;

  scanf("%c",&tipoo);
  scanf("%f\n%f\n%f",&n1,&n2,&n3);

  tipo(tipoo,n1,n2,n3);
  
  return 0;
}*/