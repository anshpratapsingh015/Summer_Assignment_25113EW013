#include<stdio.h>
int main(){
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  int ascii=65; 
for(j=1;j<=i;j++){
printf("%c",ascii);
ascii=ascii+1;
}
  printf("\n");
  }
return 0;
}



/*
A
AB
ABC
ABCD
ABCDE
*/
