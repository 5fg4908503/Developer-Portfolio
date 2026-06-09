#include<stdio.h>

int main(){

  int N, i=2;
  printf("*Welcome to the prime check*\n");
  printf("Enter the value of N: ");
  scanf("%d", &N);

  if(N <= 1){
        printf("%d is not a prime number", N);
        return 0;

  while (i<N)
  {
    if (N%i==0)
    {
      printf("%d is not a prime number", N);
      return 0;
    }
    break;
  }
  printf("%d is a prime number", N);
  return 0;
}