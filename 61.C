#include <stdio.h>

int main(void) 
{
	char str[20];
	int k,i;
	printf("enter the string and the k value:");
	scanf("%s %d",str,&k);
	for(i=0;i<k;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
