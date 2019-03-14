#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,temp=0;
    printf("enter the first value");
    scanf("%d",&m);
    printf("enter the second value");
    scanf("%d",&n);
    temp=m;
    m=n;
    n=temp;
    printf("%d %d",m ,n);
}
