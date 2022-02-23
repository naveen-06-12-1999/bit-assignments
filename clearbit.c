#include <stdio.h>
int clearbit(int val,int pos)
{
 val=val & ~(1<<pos);
return val;
}
int main()
{
    printf("%x",clearbit(0x28,3));
}
