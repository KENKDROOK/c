#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i,r=0;
    printf("enter the value");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("%d",sum);
    getch();
}
