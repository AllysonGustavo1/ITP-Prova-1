/*#include <stdio.h>

//multiplica duas matrizes A e B e guarda o resultado em R
void mult_mat(
      int lA, int cA, int A[lA][cA],
      int lB, int cB, int B[lB][cB],
      int R[lA][cB]){
  if (cA != lB){
    printf("\"Valor de alguma das multiplicações não pode ser calculado\"");
  }
  
  // Multiplicando as matrizes
  for (int i=0; i<lA; i++){ // Loop da linha
    for (int j=0; j<cA; j++){ // Loop da coluna
      R[i][j] = 0;
      for (int x=0; x<cB;x++){
        R[i][j] += A[i][x] * B[x][j];
      }
    }
  }
}

//soma duas matrizes A e B e guarda o resultado em R
void add_mat(
      int lA, int cA, int A[lA][cA],
      int lB, int cB, int B[lB][cB],
      int R[lA][cB]){
  if (lA != lB || cA != cB){
    printf("Valor da soma não pode ser calculado");
  }
  // Somando as matrizes
  for (int i=0; i<lA; i++){ // Loop da linha
    for (int j=0; j<cA; j++){ // Loop da coluna
      R[lA][cB] = A[lA][cA] + B[lB][cB];
    }
  }
}

int main(){
  int L1,L2,L3,L4,C1,C2,C3,C4;

  scanf("%d %d",&L1,&C1); // Ler valor da Linha e coluna da Matriz 1(M1)
  int M1[L1][C1];
  // Atribuindo valores a matriz
  for (int i=0; i<L1; i++){ // Loop da linha
    for (int j=0; j<C1; j++){ // Loop da coluna
      scanf("%d",&M1[i][j]);
    }
  }

  scanf("%d %d",&L2,&C2); // Ler valor da Linha e coluna da Matriz 2(M2)
  int M2[L2][C2];
  // Atribuindo valores a matriz
  for (int i=0; i<L2; i++){ // Loop da linha
    for (int j=0; j<C2; j++){ // Loop da coluna
      scanf("%d",&M2[i][j]);
    }
  }

  scanf("%d %d",&L3,&C3); // Ler valor da Linha e coluna da Matriz 3(M3)
  int M3[L3][C3];
  // Atribuindo valores a matriz
  for (int i=0; i<L3; i++){ // Loop da linha
    for (int j=0; j<C3; j++){ // Loop da coluna
      scanf("%d",&M3[i][j]);
    }
  }

  scanf("%d %d",&L4,&C4); // Ler valor da Linha e coluna da Matriz 4(M4)
  int M4[L4][C4];
  // Atribuindo valores a matriz
  for (int i=0; i<L4; i++){ // Loop da linha
    for (int j=0; j<C4; j++){ // Loop da coluna
      scanf("%d",&M4[i][j]);
    }
  }
  int R1[L1][C2];
  
  mult_mat(L1,C1,M1,L2,C2,M2,R1);
  
  
  return 0;
}*/