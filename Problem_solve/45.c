#include<stdio.h> 

int main(){
  int N;
  printf("Enter the Number of table");
  scanf("%d", &N);

  for (int i = 1; i < 11; i++)
  {
    printf("%d x %d = %d", N, i, i*N);
  }
  


}