#include <stdio.h>


void mostrar(int lista[5], char pal[6]){

  for(int i = 0; i < 5; i++)
    printf("%s[%d] = %d\n", pal, i, lista[i]);
  
}

int main(){
  int par[5], impar[5];
  int numero, contpar = 0, contimpar = 0;

  for(int i=0; i<15; i++){
    scanf("%d", &numero);
    if(numero%2 == 0){
        
      par[contpar] = numero;
      contpar++;
      
      if(contpar == 5){
        mostrar(par,"par");
        contpar = 0;
      }
    }
    else{
        
      impar[contimpar] = numero;
      contimpar++;
      
      if(contimpar == 5){
        mostrar(impar,"impar");
        contimpar = 0;
      }
    }
  }
  for(int i = 0; i < contimpar; i++)
    printf("impar[%d] = %d\n", i, impar[i]);
  
  for(int i = 0; i < contpar; i++)
    printf("par[%d] = %d\n", i, par[i]);

  return 0;
}
