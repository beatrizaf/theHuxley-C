#include <stdio.h>
#include <string.h>

int main(void) {
  int N, M, i, j;
  scanf("%d %d",&N, &M);

  int mat[N][M];
  int sum = 0, aux = 0;
  int competidor = 0;

  for (i = 0; i < N; i++){
    sum = 0;
    for (j = 0; j < M; j++){
      scanf("%d", &mat[i][j]);
      sum += mat[i][j];
    }
    if (i == 0){
     aux = sum;
    }
    else if (i != 0 ){
        if (sum < aux){
          aux = sum;
          competidor = i;
        }
    }
  }

  printf("%d", competidor + 1);
  return 0;
}
