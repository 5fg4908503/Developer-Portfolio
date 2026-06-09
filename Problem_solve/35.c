#include <stdio.h>

int main (){
  int a, b, num1, num2, i, lmc;

  printf("Enter 1st num: ");
  scanf("%d", &a);
  printf("Enter 2nd num: ");
  scanf("%d", &b);

  num1= a>b? a:b;
  num2= a<b? a:b; 

  if(num1%num2==0){
    printf("The LCM is %d", num1);
  } else {
    for (i=2; i<= num2; i++){
      lmc=num1*i;
      if(lmc%num2==0){
          break;
      }
      
    } printf("%d", lmc);
    
  }

  
return 0;
}