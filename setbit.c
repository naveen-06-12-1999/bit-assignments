
#include <stdio.h>
int setbit(int val,int pos)
{
 val=val|(1<<pos);
return val;
}
int main()
{
    printf("%d",setbit(28,3));
}
