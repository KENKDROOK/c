#include<stdio.h>
void main()
{
int a[50],i,t;
printf("enter the number");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
t=a[1];
for(i=1;i<=10;i++)
{
if(t<a[i])
{
t=a[i];
}
}
printf("%d",t);
}
