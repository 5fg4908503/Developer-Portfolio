#include <stdio.h>

int main(){
  int N=5, sum=1, i;

  printf("*Welcome to the Factorial*\n");
  printf("Enter the value of N: ");
  scanf("%d", &N);

  for(i=1; i<=N; i++){
    sum=sum*i;
  }
  printf("%d", sum);
  return 0;
}