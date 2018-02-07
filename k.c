#include<stdio.h>
void main()
{
  int count=0,i,l,d=0,al=0;
  char a[100000];
  printf("\nenter the paragraph :");
  gets(a);
  l=strlen(a);
  for(i=0;i<=l;i++)
  {
if(isdigit(a[i])==1)
    {
      d++;
    }
    else if(isalpha(a[i]))
    {
      al++;
    }
      else
      {
        count++;
      }
  }
  printf("\nthe no.of special characters in the line :%d",count-1);
}
