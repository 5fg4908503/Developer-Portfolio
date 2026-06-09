#include <stdio.h>

int main (){
  int a;

  printf ("Enter Your Mark: \n");
  scanf ("%d", &a);

  a>80? printf ("High"): a>=50 && a<80? printf ("Modarate"): printf ("Low");



return 0;
}