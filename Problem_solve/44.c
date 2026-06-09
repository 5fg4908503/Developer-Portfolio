#include<stdio.h>

int main(){
  int N, sum=0;
  do
  {
    printf("Enter a number: ");
  scanf("%d", &N);
  sum+=N;
  } while (N != 0);
  printf("Thanks for entating a pisitive number");
  
  return 0;
}