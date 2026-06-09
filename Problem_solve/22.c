#include <stdio.h>

int main(){
  int year;

  printf ("Enter Your Year: \n");
  scanf ("%d", &year);

  /*
  if (year % 4 ==0){
    if (year % 100 !=0){
      printf ("This is a leap year");
    } else {
        printf ("This is not a leap year");
    }
  } else if (year%400==0){
    printf ("This is a leap year");
  } else {
    printf ("This not a leap year");
  }
*/

if (year % 400 == 0){
    printf("Leap year\n");
}
else if (year % 4 == 0 && year % 100 != 0){
    printf("Leap year\n");
}
else {
    printf("Not Leap Year\n");
}

  return 0;
}