#include <stdio.h>
int main(){
  float c, f;

  printf ("Enter the Fahrenheit value: ");
  scanf ("%f ", &f);

  c=(f-32)*5/9;
  printf ("The cencious is: %.2f \n", c);
  return 0;
}