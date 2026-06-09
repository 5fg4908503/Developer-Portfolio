#include<stdio.h>

int main(){
  int N, sum=0;
  do
  {
    printf("Enter");
  scanf("%d", &N);
  if (N<0)
  {
    continue;
  } 
    sum=sum + N;
  } while (N!=0);
  printf("%d", sum);
  
  return 0;
}