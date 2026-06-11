#include<stdio.h>
int main(){
  int i,n,x,result=1;
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++){
result=result*x;
}
printf(" result is %d",result);
return 0;
}
