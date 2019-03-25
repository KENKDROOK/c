#include<stdio.h>
#include<string.h>
void main()
{
int n,i,sum=0;
int arr[50];
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    sum+=arr[i];
}
sum=sum/n;
printf("%d",sum);
}
