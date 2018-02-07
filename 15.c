#include <stdio.h>
void main()
{
int n,m;
printf("\n enter the number");
scanf("%d",&n);
m=(n&(n-1));
if(m==0)	
printf("yes");
else
printf("no");
  }
