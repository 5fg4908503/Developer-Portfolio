#include<stdio.h>

int main(){
  int N;

  printf("Enter total row number: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; i++)
  {
    printf("\n");
    for (int j = 0; j < i; j++)
    {
      printf(" *");
    }
  }
    // 2nd one

  printf("\n\n");

  for (int i = N; i >= 1; i--)
  {
    printf("\n");
    for (int j = 0; j < i; j++)
    {
      printf(" *");
    }
  }
  
  // 3rd one

  printf("\n\n");
  
  int copy = N;
  
  for (int i = 1; i <= N; i++)
  {
    printf("\n");
    for (int k = 0; k <copy; k++)
    {
      printf("  ");
    }
    copy=copy-1;
    for (int j = 0; j < i; j++)
    {
      printf(" *");
    }
  }


  return 0;
}
