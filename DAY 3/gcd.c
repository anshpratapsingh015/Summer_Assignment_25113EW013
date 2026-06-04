#include <stdio.h>
int main(){
  int n1,n2,gcd=1,max,i;
 scanf("%d%d",&n1,&n2);
if (n1>n2){ max=n1;}
else { max = n2; }

  for(i=1;i<=max;i++){
 if (n1%i==0 && n2%i==0){
gcd=i;}
  }
printf(" gcd of two numbers is %d",gcd);
return 0;
  }
