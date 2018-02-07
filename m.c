#include<stdio.h>
void main()
{
int f1=0,f2=1,n,i,c;
printf("enter a number");
scanf("%d",&n);
printf("%d%d",f1,f2);
for(i=1;i<n;i++)
{
c=f1+f2;
f1=f2;
f2=c;
printf("%d",c);
}
}
