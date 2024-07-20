/*#include <stdio.h>
#include <math.h>

int main() {
  float temperatura;
  char escala;
  char escalaalvo;
  float C,F,K;
  
  printf("");
  scanf("%f",&temperatura);
  getchar();

  scanf("%c",&escala);
  getchar();
  getchar();
  getchar();
  scanf("%c",&escalaalvo);
  getchar();

  if (escala == 'C'){
    if (escalaalvo == 'C'){
      printf("%.2f C",temperatura);
    }
    if (escalaalvo == 'F'){
      F = temperatura * 1.8 + 32;
      printf("%.2f F",F);
    }
    if (escalaalvo == 'K'){
      K = temperatura + 273.15;
      printf("%.2f K",K);
    }
  }
  if (escala == 'F'){
    if (escalaalvo == 'C'){
      C = (temperatura-32) / 1.8;
      printf("%.2f C",C);
    }
    if (escalaalvo == 'F'){
      printf("%.2f F",temperatura);
    }
    if (escalaalvo == 'K'){
      K = (temperatura-32) * 5/9 + 273;
      printf("%.2f K",K);
    }
    
  }
  if (escala == 'K'){
    if (escalaalvo == 'C'){
      C = temperatura - 273.15;
      printf("%.2f C",C);
    }
    if (escalaalvo == 'F'){
      K = (temperatura-273.15) * 1.8 + 32;
      printf("%.2f F",K);
    }
    if (escalaalvo == 'K'){
      printf("%.2f K",temperatura);
    }
  }
  
  return 0;
}*/