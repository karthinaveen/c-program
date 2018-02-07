#include<stdio.h>
void main()
{
 int a,b,t;
 printf("enter two num:");
  scanf("%d %d",&a,&b);
 t=a;
 a=b;
 b=t;
 printf("after swapping:%d %d",a,b);
 return 0;
 }
