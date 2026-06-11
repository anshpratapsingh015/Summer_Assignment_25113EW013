#include<stdio.h>
int main(){
  int i,j,max=0, n;
scanf("%d",&n);
  
for(i=2;i<=n;i++){
int count=0;

for(j=2;j<=i;j++){

if(i%j==0){
 count=count+1;
} }
if(count==1){
if (n%i==0){
max=i;
} 
}
}
      
printf(" the largest prime factor is %d",max);
    
return 0;
}



    
