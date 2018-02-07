#include"stdio.h"
void main()
{
int k,count=0;
printf("\n Enter a number");
scanf("%d",&k);
while(k!=0)
{
count++;
k=k/10;
}
printf("\n Total digits is %d",count);
 }
