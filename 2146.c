#include <stdio.h>
#include <string.h>

int main(void) {

  char nac, ocup;
  int qntArmas, calibre;
  
  while(1){

    scanf("%s", &nac);
    
    if (nac != 'E' && nac != 'B'){
      printf("Fim");
      break;
    }

    scanf("%s", &ocup);
    if (ocup != 'M' && ocup != 'C' && ocup != 'O' && ocup != 'T'){
      printf("Fim");
      break;
    }

    scanf("%d", &qntArmas);
    scanf("%d", &calibre);

    if(nac == 'E'){
      if(qntArmas == 0)
        printf("Liberado\n");
      else 
        printf("Barrado\n");
    }
    
    else if (nac == 'B'){
      if(ocup == 'M')
        printf("Liberado\n");
        
      else if (ocup == 'T' && qntArmas <= 1 && calibre <= 22)
          printf("Liberado\n");

      else if (ocup == 'C' && qntArmas <= 2 && calibre <= 38)
          printf("Liberado\n");
      
      else if (ocup == 'O' && qntArmas <= 1 && calibre <= 22)
          printf("Liberado\n");
      
      else 
        printf("Barrado\n");
    } 
  }

  return 0;
}
