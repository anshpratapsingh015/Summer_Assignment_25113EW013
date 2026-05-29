#include <stdio.h>
int main(){
int r,n,pdt=1;
scanf("%d",&n);
while(n>0){
r=n%10;
pdt=pdt*r;
n=n/10;
}
printf(" the product of digits is %d",pdt);
return 0;
}
