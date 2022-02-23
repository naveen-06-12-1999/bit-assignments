
#include <stdio.h>
int setbit(int val,int pos)
{
 val=val|(1<<pos);
return val;
}
int main()
{
    printf("%x",setbit(0x28,3));
}
