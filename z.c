#include <stdio.h>
int main()
{
	int a[10],i,j,n,temp;
	printf("enter the number");
	scanf("%d",&n);
	printf("list of elements");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        temp=a[i];
	         a[i]=a[j];
	        a[j]=temp;
	        }
	       
	}
	}

	 printf("maximum number is:%d\n",a[n-1]);
	printf("minimum number is:%d",a[0]);
	
	
	return 0;
}
