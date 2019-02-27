#include<stdio.h>
void main()
{
    int h1,h2,m1,m2,result=0,sum=0;
    printf("enter the value hour");
    scanf("%d%d",&h1,&h2);
    printf("enter the value min");
    scanf("%d%d",&m1,&m2);
    result=h1-h2;
    sum=m1-m2;
    printf("%d %d",result,sum);
    getch();
}
