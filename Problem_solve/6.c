#include <stdio.h>

int main()
{
  int age;
  char f_name[10], s_name[10];
  printf("Enter your first name");
  scanf ("%9s", &f_name);

  printf("Enter your second name");
  scanf ("%9s", &s_name);

  printf("Enter your age");
  scanf ("%d", &age);

  printf (" First name is %s, second name is %s, and age is %d ", f_name, s_name, age);
}