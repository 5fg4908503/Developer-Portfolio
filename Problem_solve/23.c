#include <stdio.h>

int main (){
  int mark;

  printf ("Enter Your Mark: \n");
  scanf ("%d", &mark);

  if (mark >=90){
    printf ("Grade is: A");
  }
  else if (mark >=75){
    printf ("Grade is: B");
  }
  else if (mark >=60){
    printf ("Grade is: C");
  }
  else if (mark >=30){
    printf ("Grade is: D");
  }
  else if (mark <30){
    printf ("Grade is: F");
  }


  return 0;
}