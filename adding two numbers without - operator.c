include<stdio.h>
int add(int x,int y){
  int carry;
  while(y!=0){
    carry=~x&y;
    x=x^y;
    y=carry<<1;
  }
  return x;
}
int main() {
  printf("the sum is %d",add(12,8));
}