#include <stdio.h>

int main(void) 
{
  int precoavela, precocaramelo, precopassas;
  int quantav, quantca, quantpa;

  scanf("%d\n %d\n %d", &precoavela, &precocaramelo, &precopassas);
  scanf("%d\n %d\n %d",&quantav, &quantca, &quantpa);
  
  float valor;
  valor = (precoavela * quantav) + (precocaramelo * quantca) + (precopassas * quantpa);

  printf("Valor: R$%.2f\n",valor);

  return 0;
}
