/*#include <stdio.h>

int main(){
  int N,L,C,indiceL,indiceC,contador;

  scanf("%d",&N); // Leitura do tamanho da matriz
  
  int vetor[N]; // Definindo o vetor
  
  for (int i=0; i<N; i++){ // Atribuindo valores ao vetor
    scanf("%d",&vetor[i]);
  }
  scanf("%d %d",&L,&C); // linhas e colunas da matriz
  scanf("%d %d",&indiceL,&indiceC);

  int matriz[L][C];// Definindo a matriz

  // loop para colocar os valores do vetor na matriz
  for (int i=0; i<L; i++){ // loop da linha
    for (int j=0; j<C; j++){ // loop da coluna
      matriz[i][j] = vetor[contador]; // coloca o valor do vetor na matriz
      contador++; // aumenta em um o contador que percorre apenas o vetor
    }
  }
  printf("%d",matriz[indiceL][indiceC]); // imprime o valor da posicao solicitada
  return 0;
}*/