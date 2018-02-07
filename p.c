#include<stdio.h>
main()
{
 int a,b,temp;
 printf("\n Enter the value 1");
 scanf("%d",&a);
 printf("\n Enter the value 2");
 scanf("%d",&b);
 a=a||b;
 b=b||a;
 {
  temp=a;
  a=b;
  b=temp;
}
 printf("%d",a);
 printf("%d",b);
 }
