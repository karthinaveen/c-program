 #include<stdio.h>
 #include<string.h>
 void main()
 {
	int i,count=0,b;
	char ch[200];
	printf("\nEnter character");
  scanf("%s",&ch);
	b=strlen(ch);
	for(i=0;i<b;i++)
	{
	if(ch[i]>='0'&&ch[i]<='9')
	{
	
	 count++;
} 
}
printf("\nNumeric:%d",count);
}
