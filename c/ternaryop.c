#include<stdio.h>
 
  int main (void)
  {
     int a,b,c;
     printf("Enter two numbers\n");
     scanf("%d %d",&a,&b);
     c = (a>b?a:b);
     printf("%d is greater",c);
     return 0;
  }