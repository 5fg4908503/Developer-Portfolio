#include <stdio.h>

int main(){
  int N, i=1, sum=0;

  printf("Enter the value of N");
  scanf("%d", &N);

  while (i<=N )
  {
    sum=sum+i;
    i=i+2;
  }
  
  printf("%d", sum);

  return 0;
} 