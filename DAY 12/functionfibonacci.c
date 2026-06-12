#include<stdio.h>


void fibonacci(int n){
                 int i,a=0,b=1,c;
    
      for(i=1;i<=n-2;i++){
                         c=a+b;
                         a=b;
                              b=c;
                           printf("%d\n",c);

      }

}

int main(){
 int n,a=0,b=1;
scanf("%d",&n);
  
printf("%d\n%d\n",a,b);
  

  fibonacci(n);
  

return 0;
}
 
