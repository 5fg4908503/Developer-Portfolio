#include <stdio.h>

int main (){
  
  float num_1, num_2, cal;
  char opr;

  printf (" *****Welcome to basic calculator*****\n");

  printf ("Enter First Numbrr: \n");
  scanf ("%f", &num_1);
  printf ("Enter Second Number: \n");
  scanf ("%f", & num_2);
  printf ("Enter Your Operation (+,-,*,/): \n");
  scanf ("%s", & opr);

  switch (opr)
  {
  case '+':
    cal = num_1+num_2;
    printf ("Your Addition is: %.0f", cal);
    break;
    case '-':
    cal = num_1-num_2;
    printf ("Your Subtraction is: %.0f", cal);
    break;
    case '*':
    cal = num_1*num_2;
    printf ("Your Multiplication is: %.0f", cal);
    break;
    case '/':
    cal = num_1/num_2;
    printf ("Your Division is: %.2f", cal);
    break;
  
  default: printf ("Enter a valid Operation");
    break;
  }

return 0;
}