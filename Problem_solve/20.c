#include <stdio.h>

int main(){
  int a;

  printf ("Enter Your Number\n");
  scanf ("%d", &a);

  if (a%2==0)
  {
    printf ("This is a even Number");
  } else {
    printf ("This is a odd Number \n");
  }
  
  return 0;
}