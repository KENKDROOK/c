#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,sum;
    printf("enter the value");
    scanf("%d %d",&m,&n);
    sum=m*n;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    getch();
}
