#include<stdio.h>

int main(){

  int N;
  printf("*Welcome to the prime check*\n");
  printf("Enter the value of N: ");
  scanf("%d", &N);

  for(int i=2; i<N; i++){
    if(N%i==0 ){
      printf("%d is not a prime number", N);
      return 0;
    }
  }
  printf("%d is a prime number", N);


  return 0;
}