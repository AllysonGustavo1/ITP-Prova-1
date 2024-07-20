/*#include <stdio.h>
#include <math.h>

int main() {
  float nota1,nota2,nota3,peso1,peso2,peso3;
  float media,sobra;
  
  printf("");
  scanf("%f",&nota1);
  getchar();
  getchar();
  scanf("%f",&peso1);
  getchar();
  printf("");
  scanf("%f",&nota2);
  getchar();
  getchar();
  scanf("%f",&peso2);
  getchar();
  printf("");
  scanf("%f",&nota3);
  getchar();
  getchar();
  scanf("%f",&peso3);
  getchar();

  media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
  sobra = -(media) + 10;
  if (media < 3){
    printf("O aluno foi REPROVADO com média %.2f", media);
  }
  if (media >= 7){
    printf("O aluno foi APROVADO com a média %.2f", media);
  }
  if (media >= 3 && media <7){
    printf("O aluno ficou em RECUPERAÇÃO com média %.2f precisando de %.2f", media, sobra);
  }
  
	return 0;
}*/