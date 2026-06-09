#include <stdio.h>

int main(){
  int num,i=1;

  printf("*Welcome to the table*\n");
  printf("Enter the value of number: \n");
  scanf("%d", &num);

  for (i=1; i<=10; i++)
  {
    printf("%d x %d= %d\n", num, i, num*i);
  }
  

  return 0;
}