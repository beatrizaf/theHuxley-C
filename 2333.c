#include <stdio.h>
#include <string.h>

int main(void) {
  float num1;
  float num2;
  char op[20];

  scanf("%f", &num1);
  scanf("%f", &num2);
  scanf("%s", op);
  
  if(strcmp(op, "multiplicacao") == 0)
    printf("resultado = %.2f", (num1 * num2));
  
  else if(strcmp(op, "divisao") == 0)
    printf("resultado = %.2f", (num1 / num2));
  
  else if(strcmp(op, "soma") == 0)
    printf("resultado = %.2f", (num1 + num2));
  
  else
    printf("resultado = %.2f", (num1 - num2));
  
  return 0;
}
