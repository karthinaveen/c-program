#include <stdio.h>
int main(void) 
{
int x,y,temp;
printf("\n enter two numbers to swap:");
scanf("%d %d",&x,&y);
temp=x;
x=y;
y=temp;
printf("\n after swapping:");
printf("\nx=%d",x);
printf("\ny=%d",y);
return 0;
}
