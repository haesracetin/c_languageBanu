#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number: ");
    scanf("%d",&a);
    
    printf("enter the second number: ");
    scanf("%d",&b);
    
    c=a%b;
  
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
