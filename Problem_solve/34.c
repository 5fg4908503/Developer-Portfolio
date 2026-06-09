#include <stdio.h>

int main(){
  int N, sum=0, i,a;

  printf("*Welcome to the Digit cal*\n");
  printf("Enter the value of N: ");
  scanf("%d", &N);

  if(N<0){
    N=N*-1;
  } 
    while(N>0){
    a=N%10;
    sum=sum+a;
    N=N/10;
  }
  

  printf("%d", sum);
  return 0;
}