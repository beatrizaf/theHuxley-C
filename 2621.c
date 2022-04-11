#include <stdio.h>
#include <string.h>

int main(void) {
  int T, i, j;
  scanf("%d",&T);

  int mat[T][T];

  for (i = 0; i < T; i++){
    for (j = 0; j < T; j++){
      scanf("%d", &mat[i][j]);
      if (mat[i][j] < 0)
        mat[i][j] *= 2;
    }
  }

  for (i = 0; i < T; i++){
    for (j = 0; j < T; j++){
        if (j == (T - 1)) printf("%d", mat[j][i]);
        else printf("%d ", mat[j][i]);
    }
    printf("\n");
  }

  return 0;
}
