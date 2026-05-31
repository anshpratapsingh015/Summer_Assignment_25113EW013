#include <stdio.h>
int main(){
int i,j,n1,n2,count;
printf(" enter two nos between which all prime nos are to be printed ");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++){
  count =0;
 for(j=2;j<i;j++){
 if (i%j==0){ 
 count = count + 1;
  }
 } if (i!=1 && count==0){
   printf("%d\n",i);
 }}
 return 0;
 }



 

