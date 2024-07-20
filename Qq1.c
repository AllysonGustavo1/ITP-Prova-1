/*#include <stdio.h>

int main(){
  int A[20],A3[20],A4[20],A0[20];
  int i = 0,i3 = 0, i4 = 0, i0 = 0;
  
  for (i=0;i<20;i++){ //colocar os valores no vetor principal
    scanf("%d",&A[i]);
  }
  i = 0;
  for (i=0;i<20;i++){ //etapa para separar os valores em outros vetores
    if (A[i]%3 == 0){ //se o numero for multiplo de 3
      A3[i3] = A[i];
      i3++;
    }
  }
  i = 0;
  for (i=0;i<20;i++){ //etapa para separar os valores em outros vetores
    if (A[i]%4 == 0){ //se o numero for multiplo de 4
      A4[i4] = A[i];
      i4++;
    }
  }
  i = 0;
  for (i=0;i<20;i++){ //etapa para separar os valores em outros vetores
    if (A[i]%3 != 0 && A[i]%4 != 0){ //se o numero nao for multiplo de 3 ou 4
      A0[i0] = A[i];
      i0++;
    }
  }
  i = 0;
  printf("a)");
  for (i=0;i<i3;i++){ //printa os numeros multiplos de 3
    if (i == 0){
      printf("%d",A3[i]);
    }
    else{
     printf(",%d",A3[i]); 
    }
  }
  i = 0;
  printf("\nb)");
  for (i=0;i<i4;i++){ //printa os numeros multiplos de 4
    if (i == 0){
      printf("%d",A4[i]);
    }
    else{
     printf(",%d",A4[i]); 
    }
  }
  i = 0;
  printf("\nc)");
  for (i=0;i<i0;i++){ //printa os numeros que nao sao multiplos de 3 ou 4
    if (i == 0){
      printf("%d",A0[i]);
    }
    else{
     printf(",%d",A0[i]); 
    }
  }
}*/