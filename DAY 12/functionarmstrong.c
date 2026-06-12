#include<stdio.h>
#include<math.h>
int armstrong(int n){
  int r,org, count=0;
org=n;   
      
     while(n>0)  {
             r=n%10;
               count+=1;
                n/=10;
  }
  
  n=org;
  r=0;
  int sum=0;

          while(org>0){
                     r=org%10;
                       sum+=(int) pow(r,count);
                          org/=10;
  }
  if (sum==n)
    return 1;
  else 
    return 0;

}
int main(){
  int n,result;
scanf("%d",&n);
  
  result=armstrong(n);
 
  if (result==1)
  printf(" number is armstrong");
else
    printf(" number is not a armstrong");

return 0;
}
