#include<stdio.h>

int main(){
  int N, num;

  printf("Enter your number: ");
  scanf("%d", &N);

  while(N!=0){
     num=N%10;
    printf("%d", num);
    N=N/10;
  }
}