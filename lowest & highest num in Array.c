#include<stdio.h>
#include<string.h>
void main()
{
int n,i,sum=0,temp=0;
int arr[50];
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]>arr[i+1])
    {
        sum=arr[i];
    }
    else
    {
      temp=arr[i];  
    }
}
printf("\n%d",sum);
printf("\n%d",temp);
}
