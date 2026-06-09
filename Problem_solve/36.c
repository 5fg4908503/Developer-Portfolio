#include <stdio.h>

int main (){
    int a, b, num1, num2, gcd;

    printf("Enter 1st num: ");
    scanf("%d", &a);

    printf("Enter 2nd num: ");
    scanf("%d", &b);

    num1 = a > b ? a : b;
    num2 = a < b ? a : b;

    while(num2 != 0){
        gcd = num1 % num2;
        num1 = num2;
        num2 = gcd;
    }

    printf("GCD = %d\n", num1);

    return 0;
}