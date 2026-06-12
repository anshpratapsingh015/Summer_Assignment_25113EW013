#include<stdio.h>
int palindrome(int n){
  int r,org,rev=0;
  
  org=n;
  
  while(n>0){
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
   
      if(org==rev) return 1;
  else return 0;

}
int main(){
  int n,result;
scanf("%d",&n);
   
  result =  palindrome(n);
     
  if (result==1)
    printf("number is palindrome");
   else
    printf("number is not a palindrome");
  
return 0;
}




 
