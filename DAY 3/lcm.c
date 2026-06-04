#include <stdio.h>
int main(){
  int i,n1,n2,max,lcm=0;
scanf("%d%d",&n1,&n2);
if (n1>n2){ max= n1;}
else{ max = n2; }
 for (i=max;i<=n1*n2;i++){
  if(i%n1==0 && i%n2==0){
   lcm=i;
    break;
  }
 }
printf(" the lcm is %d",lcm);
return 0;
}
