#include <stdio.h>
int main()
{
    char name[3][10]; 
    printf("Enter the 3 name :\n");
    scanf("%s",name);
    
    int i;
    
    for (i = 0; i < 3; i++)
    {
        printf("Enter the sring :");
        scanf("%s", &name[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%s\n", &name[i]);
    }
    return 10;
}
