#include <stdio.h>

int main (){
  int a,b,c;

  printf ("Enter 3 numbers");
  scanf ("%d %d %d", &a, &b, &c);

  if (a>b){
    if (a>c){
      printf ("A is the big");
    } else {
      printf ("C is the big");
    }
  } else if (b>c){
    printf ("B is the big");
  } else {
    printf ("C is the big");
  }
 
  return 0;
}