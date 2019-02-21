#include<stdio.h>

void main()
{
int n,arr[50],i,temp,j,sum=0,p;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
   if(arr[i]>arr[j])
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
     }
  }
}
for(j=0;j<n;j++)
{
    //printf("%d",arr[j]);
    sum=sum+arr[j];
    
}
p=sum/n;
printf("%d",p);
//getch();
}
