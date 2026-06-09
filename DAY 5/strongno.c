#include<stdio.h>
int main(){
  int i,org,n,r,sum=0;
scanf("%d",&n);
  org=n;
while(n>0){
  int fact=1;
r=n%10;
for(i=2;i<=r;i++){
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
if(sum==org){
printf(" it is a strong number");
}
return 0;
}
