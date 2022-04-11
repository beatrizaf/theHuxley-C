#include <stdio.h>


float *reduzir(float *p_x, float *p_y){
  *p_x = *p_x - *p_y;
  return p_x;
}

int main(void) {
  float x, y, *p_x = &x, *p_y = &y;
  scanf("%f %f", &x,&y);
  p_x = reduzir(p_x,p_y);
  printf("%.2f %.2f",*p_x ,*p_y);
  return 0;
}
