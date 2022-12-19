#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() { 
    int a, b, c; 
    char d; 
  
    printf("enter the first number: ");
    scanf("%d", &a); 
    printf("enter the second number: ");
    scanf("%d", &b);
    printf("enter the operator: ");
    scanf(" %c", &d);
  
    if (d == '+') { 
        c = a + b; 
        printf("the result is: %d", c);
    }else if  (d == '-') { 
        c = a - b; 
        printf("the result is: %d", c);
    } else if  (d == '*') {
        c = a * b;
        printf("the result is: %d", c);
    } else if  (d == '/') {
        c = a / b;
        printf("the result is: %d", c);
    } else {
        printf("invalid operator");
    }
 return 0;
}
