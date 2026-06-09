#include <stdio.h>

int main (){
  int a,b;

  printf ("Enter Your Mark: \n");
  scanf ("%d %d", &a, &b);

int min= a>b? a:b;

printf ("print %d", min);

return 0;
}
