#include<stdio.h>
void main()
{
char a[40];
int i,c=0;
 printf("Enter the paragraph");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
c++;
}
}
printf("%d",c);
}
