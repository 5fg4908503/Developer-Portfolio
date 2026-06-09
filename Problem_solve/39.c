#include<stdio.h>

int main(){
  int N;

  printf("*****Welcome to fibonaki series*****\n");
  printf("Enter your target number: ");
  scanf("%d", &N);

  printf(" 0,");

  if(N>=1){
    printf(" 1,");
  }
  int first=0;
  int next=1;

  while(first + next <= N) {
    int sum= first + next;
    printf(" %d,", sum);
    first=next;
    next=sum;  
  }  
  return 0;
