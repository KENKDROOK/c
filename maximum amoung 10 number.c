#include<stdio.h>
void main()
{
int a[50],i,temp;
printf("enter the number");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
temp=a[1];
for(i=1;i<=10;i++)
{
if(temp<a[i])
{
temp=a[i];
}
}
printf("%d",temp);
}
