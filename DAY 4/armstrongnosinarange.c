#include<stdio.h>
#include<math.h>
int main(){
  int i,n1,n2,r,org,temp,comp,sum,count;
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++){
  count=0;
  sum=0;
org=i;
  comp=i;
  temp=i;
while(comp>0){
count=count+1;
comp=comp/10;
}
while(org>0){
r=org%10;
sum=sum+pow(r,count);
org=org/10;
}
if(sum==temp){
printf("%d\n",temp);
}
}
return 0;
}

