#include<stdio.h>
int main(){  
int i,n,c=0;
scanf("%d",&n);
while(n>0)
{
n=n/10;
c=c+1;
}

printf("the count of digits is %d",c);
return 0;}
