#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("enter the value");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
