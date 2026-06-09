#include<stdio.h>

int main(){
  int N;
  int arm=0;

  printf("Welcome to amrstong number\n");
  printf("Enter the armstrong number: ");
  scanf("%d", &N);

  while (N>0)
  {
    int temp= N%10;
    arm=arm+(temp*temp*temp);
    N=N/10;
  } 

  if(arm == N){
    printf("The number is a armstrong number");
  } else
  {
    printf("The number is not a armstrong number");
  }
  
  
  return 0;
}