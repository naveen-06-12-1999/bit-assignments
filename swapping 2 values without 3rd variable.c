#include <stdio.h>

int main()
{
    int a=2,b=5; 
    a=a^b;       
    b=a^b;       
    a=a^b; 
    printf("the swapped value is %d %d",a,b);  

    return 0;
}