#include <stdio.h>
#include <ctype.h>
int main()
{
    int count=0,len;
    char str[100];
   scanf(" %[^\n]", str);
    
    len = strlen(str);
    for(int i = 0; i != len; i++) 
    {
   if(!isspace(str[i])) 
    {
       count++;
    }
    }

printf("%d\n", count);
    return 0;
}
