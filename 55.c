#include<stdio.h>
int main()
{
    int n,m,d;
    printf("enter the number=");
    scanf("%d%d",&n,&m);
    d=n*m;
    if(d%2==0)
    {
        printf("even");
        
    }
    else
    {
        printf("odd");
}
}
