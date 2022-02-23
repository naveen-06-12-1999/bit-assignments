#include <stdio.h>
int togglebit(int val,int pos){
    val=val^(1<<pos);
    return val;
}
int main(){
    printf("%d",togglebit(28,3));
}
