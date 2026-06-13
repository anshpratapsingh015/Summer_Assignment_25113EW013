#include<stdio.h>
int main(){
  int i,n;
 printf(" enter size of array");  
scanf("%d",&n);

  int a[n];

printf("enter elements");
       for(i=0;i<n;i++){
                        scanf("%d",&a[i]);
                        }

    for(i=0;i<n;i++){
                printf("%d\n",a[i]);
                               }

   
return 0;
}
