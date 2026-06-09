#include <stdio.h>
int main(){
  int h, b;
  float area;

  printf ("Enter the Height and Base of the tringle: ");
  scanf ("%d %d", &h, &b);

  area= .5*h*b;

  printf ("The area is: %.2f",  area);
  return 0; 
}