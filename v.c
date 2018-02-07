#include <stdio.h>

int main()
{
   char str1[50],str2[50];
   int i,j;
   printf("\nenter the first string:");
   scanf("%s",&str1[50]);
   printf("\nenter the second string:");
   scanf("%s",&str2[50]);
   for(i=0;str1[i]!=0;i++)
   {
       for(j=0;str2[i]!=0;j++,i++)
        {
           str1[i]=str2[j];
           
       }
       str1[i]=0;
       printf("\noutput:%s",str1);
   }
   return 0;
}
