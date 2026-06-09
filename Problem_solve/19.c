#include <stdio.h>

int main(){
  int num;

  printf("Enter Your Number: \n");
  scanf("%d", &num);

  if (num > 0) {
    printf ("Number is positive");
  }
    else if (num<0) {
      printf ("Numbr is Negative");
    } else {
    printf ("Number is Zero");
  }  
}  
