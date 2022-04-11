#include <stdio.h>

int main(void) 
{
  float salariobase;
  float desconto;
  scanf("%f", &salariobase);

  if (salariobase <= 1751.81) 
    desconto = salariobase * 0.08;

  else if (salariobase >= 1751.82 && salariobase <= 2919.72)
    desconto = salariobase * 0.09;

  else if (salariobase >= 2919.73 && salariobase < 5839.45)
    desconto = salariobase * 0.11;

  else
    desconto = 5839.45 * 0.11;

  printf("Desconto do INSS: R$ %.6f\n",desconto);
  return 0;
}
