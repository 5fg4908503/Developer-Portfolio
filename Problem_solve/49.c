#include<stdio.h>

int main(){
  int N;

  do
  {
    printf("Enther a number: ");
    scanf("%d", &N);
    if(N == -1) {break;}
    printf("Sq root of %d is %d\n", N, N*N);
  } while (N != -1);
  return 0;
}