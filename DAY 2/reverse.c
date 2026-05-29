#include <stdio.h>
int main(){
  int n,r,rev=0;
scanf("%d",&n);
while(n>0){
r=n%10;
  rev=r+10*rev;
n=n/10;
}
printf("the reverse of number is %d",rev);
return 0; }
