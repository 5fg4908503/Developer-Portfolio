#include <stdio.h>

int main (){
  int a;

  printf ("Enter Your Mark: \n");
  scanf ("%d", &a);

char *qu = (a%2==0)? "even" : "odd";

printf ("print %s", qu);

return 0;
}
