#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i,r=0;
    printf("enter the value");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",n-1);
    }
    getch();
}
