#include <stdio.h>
int main(){
  int a,b;

  printf("Enter tow values");
  scanf("%d %d", &a, &b);

  int sum=a+b;
  int sub=a-b;
  int mul=a*b;
  float div=(float)a/b;
  int mod=a%b;

  printf ("sum is:%d, sub is:%d, mul is:%d, div is: %.2f, mod is: %d", sum, sub, mul, div, mod );
  
  return 0;
}