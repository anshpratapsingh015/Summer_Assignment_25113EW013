#include <stdio.h>
int main(){
  int n,i,count=0;
scanf("%d",&n);
for (i=2;i<n;i++){
if(n%i==0)
{
  count=count+1;
}
}
  if( n==1 || count != 0)
  { printf(" n is not a prime number") ; }
  else {
printf(" n is a prime number");
  }
  return 0;
}
