#include<stdio.h>
void main()
{
char str[100];
int n,i;
printf("enter a sting:");
gets(str);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%s",str);
}
 }
