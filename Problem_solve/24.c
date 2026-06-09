#include <stdio.h>

int main (){
  int age;

  printf ("Enter Your Mark: \n");
  scanf ("%d", &age);

  if (age >60){
    printf ("Senious");
  }
  else if (age >20 && age<60){
    printf ("Abdult");
  }
  else if (age >13 && age<20){
    printf ("Teen");
  }
  else if (age <13 && age>0){
    printf ("Child");
  } else {
    printf ("Undefine");
  }
  


  return 0;
}