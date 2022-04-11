#include <stdio.h>
#include <string.h>

int main(void) {
  char verbo[20];
  char presente[19];
  char gerundio[25];

  scanf("%s",verbo);
  int ultimo = strlen(verbo) -1; 

  for(int i = 0; i < ultimo;i++){
    presente[i] = verbo[i];
    gerundio[i] = presente[i];
  }
  printf("%s %s",presente, strcat(gerundio,"ndo"));
  return 0;
}
