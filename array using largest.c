#include<stdio.h>

void main()
{
int n,max=0,arr[50],i;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
max=arr[0];
for(i=0;i<n;i++)
{
    if(arr[i]>max)
   {
        max=arr[i];
        
        //printf("%d",max);
    }
 }
printf("%d",max);

//getch();
}
