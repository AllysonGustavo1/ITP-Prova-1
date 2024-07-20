/*#include <stdio.h>
#include <stdlib.h>

void perfeito(int A, int B){
  int soma,aux = 0;
  for (int i=A;i<=B;i++){
    soma = 0;
    for (int j=1;j<i;j++){
      if(i%j == 0){
        soma = soma + j;
      }
    }
    if (soma == i && aux == 0 && i != 0 && i != 1){
      printf("%d",soma);
      aux = 1;
    }
    else if (soma == i && aux == 1 && i != 0 && i != 1){
      printf(",%d",soma);
    }
  }
}

int main(){
  int n1,n2;

  scanf("%d,%d",&n1,&n2);

  perfeito(n1,n2);
  
  return 0;
}*/