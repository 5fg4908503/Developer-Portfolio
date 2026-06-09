#include <stdio.h>

int main(){
    int num;
    
    scanf ("%d", &num);
    
    num>=0 ? printf ("%d \n", num): printf ("%d", num*-1);
    
}