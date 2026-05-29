#include <stdio.h>
int main(){
  int original,n,i,r,rev=0;
scanf("%d",&n);
  original=n;
while(n>0){
r=n%10;
rev=rev*10+r;
n=n/10;
}
if (original == rev){
printf("number is pallindrome");
}
else { printf("number is not palindrome"); }
return 0;
     }
