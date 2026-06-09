#include<stdio.h>

int main(){
  int N, sum=0, i=1;
  
  
  printf("Enter");
  scanf("%d", &N);

  do
  {
    i++;
    if (i % 2 != 0)
    {
      continue;
    }
    printf(" %d,", i);
  
  } while (i<=N);

   return 0;
}
  

