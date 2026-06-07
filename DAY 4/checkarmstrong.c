#include<stdio.h>
#include <math.h>
int main(){
  int n,org_n,r,sum=0,count=0;
scanf("%d",&n);
  org_n=n;
  
while(n>0){
 r=n%10;
count=count+1;
n=n/10;
}
  n=org_n;
while(org_n>0){
r=org_n%10;
  sum=sum+pow(r,count);
 org_n=org_n/10;
}
if(sum==n){ 
printf(" number is armstrong");
}
else { printf("not an armstrong number"); }
return 0;
}
