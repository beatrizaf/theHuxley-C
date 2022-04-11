#include <stdio.h>

int main(void) {
  int a, b, c, energPedro, energiaInicial;
  char carac;

  scanf("%d %d %d %d \n", &a, &b, &c, &energiaInicial);
  scanf("%c", &carac);
  energPedro = energiaInicial;

  while(1){

    if (carac == 'C'){
      a -= 40;
      b -= 40;
      c -= 40;
      energPedro -= 45;
      
    }
    else if (carac == 'V'){
      a -= 50;
      b -= 50;
      c -= 50;
      energPedro -= 60;
      
    }
    
    if (energPedro <= 0){
        printf("Que pena... Era um jovem tao promissor");
        break;
    }
    
    else if (a <= 0 && b <= 0 && c <= 0){
        printf("Eba! Pedro sobreviveu");
        break;
    }      
  }  
  return 0;
}
