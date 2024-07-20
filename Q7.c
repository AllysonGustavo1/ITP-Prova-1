/*#include <stdio.h>

int main(){
  int numero,invertido = 0,resto,temporario;
  
  scanf("%d",&numero);
  temporario = numero;
  while (temporario != 0){
    resto = temporario % 10;
    invertido = (invertido * 10) + resto;
    temporario = temporario / 10;
  }

  if (numero == invertido) printf("%d é Palíndromo e ",invertido); else printf("%d não é Palíndromo e ",numero);
  if (numero % 2 ==0) printf("par."); else printf("impar.");
  return 0;
}*/