#include<stdio.h>
#include<conio.h>
void main()
{
    int h,m;
    printf("enter the value");
    scanf("%d",&m);
    h=m/60;
    m=m%60;
    printf("%d %d",h,m);
    getch();
}
