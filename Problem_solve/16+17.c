#include <stdio.h>
#include <math.h>
int main(){
  int P, T, R;

  printf ("Enter all the vlaues of (P, T, R): ");
  scanf ("%d %d %d", &P, &T, &R);

  float s_int=((float)P*T*R)/100;
  float c_int=P* pow((1+(float)R/100),T);

  printf ("The simple interest is: %.2f and the compound interest is: %.2f", s_int, c_int);

  return 0;
}