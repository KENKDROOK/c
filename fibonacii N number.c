#include<stdio.h>
void main()
{
int n,a,b,f,i;
printf("enter the element");
scanf("%d",&n);
a=0;
b=1;
printf("%d%d",a,b);
for(i=1;i<n;i++)
{
f=a+b;
a=b;
b=f;
printf("%d",f);
}
}
