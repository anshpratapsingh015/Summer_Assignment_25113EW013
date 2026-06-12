#include<stdio.h>

   int perfectnumber (int n){
     int i, sum=0;
     for(i=1;i<=n/2;i++){
       if(n%i==0)
         
         sum=sum+i;
     }
     return sum;
       
       
   }

int main(){
  int sum, n;
scanf("%d",&n);
   sum=perfectnumber(n); 
if(sum==n)
  printf(" it is a perfect number");
else 
  printf(" it is not a perfect number");
return 0;
}
