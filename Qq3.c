/*#include <stdio.h>
#include <stdlib.h>

void vetor(int x[],int y[],int tam1,int tam2){ // funcao para intercalar os vetores
  int saida[tam1+tam2];
  int k = 0;
  int l = 0;
  if (tam1 == tam2){ // se os dois vetores forem iguais
    for(int i=0;i<tam1;i++){ // alternando os valores e colocando no vetor saida
      saida[i*2] = x[i];
      saida[i*2+1] = y[i];
    }
  } else if (tam1 == 0 && tam2 != 0){
      for (int i = 0; i < tam2; i++){
          saida[i] = y[i];
      }
  } else if (tam2 == 0 && tam1 != 0){
      for (int i = 0; i < tam1; i++){
          saida[i] = x[i];
      }
  } else if (tam1>tam2){
    for(int i=0;i<tam1+tam2;i++){
      if (i < tam1){
        if (i%2 == 0){
            saida[i] = x[i-k];
            k++;
        }else {
            saida[i] = y[i-l-1];
            l++;
        }
      } else {
          if (i == tam1){
              saida[i] = y[i];
          } else if (i > tam1){
              saida[i] = x[i-k];
          }
      }
    }
  } else if (tam1<tam2){
    for(int i=0;i<tam1+tam2;i++){
      if (i < tam2){
        if (i%2 == 0){
            saida[i] = x[i-k];
            k++;
        }else {
            saida[i] = y[i-l-1];
            l++;
        }
      } else {
          if (i == tam2){
              saida[i] = y[i-l-1];
          } else if (i > tam2){
              saida[i] = y[i-k];
          }
      }
    }
  } 
  printf("Resultado: ");
  for (int i = 0;i<tam1+tam2;i++){
    printf("%d ",saida[i]);
  }
}

int main(){
  int tamanho1,tamanho2;

  scanf("%d",&tamanho1); // tamanho do primeiro vetor
  int vetor1[tamanho1];
  for (int i = 0; i<tamanho1; i++){ // atribuindo valores ao primeiro vetor
    scanf("%d",&vetor1[i]);
  }
  scanf("%d",&tamanho2); // tamanho do segundo vetor
  int vetor2[tamanho2];
  for (int i = 0; i<tamanho2; i++){ // atribuindo valores ao segundo vetor
    scanf("%d",&vetor2[i]);
  }
  vetor(vetor1,vetor2,tamanho1,tamanho2);
  return 0;
}*/