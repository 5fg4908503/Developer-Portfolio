#include<stdio.h>

int main(){
  int N, rev, pali, N2=0;

  printf("Enter ur number: ");
  scanf("%d", &N);
  
  
    int check = N;
  while (check>0)
  {
    rev = check%10;
    N2 = N2*10 + rev;
    check = check/10;
  }
  if(N2 == N){
        printf("%d is a palindrome number", N);
    } else {
        printf("%d is not a palindrome number", N);
    }
  

  return 0;
}