#include<stdio.h>

void main()
{
int n,min=0,arr[50],i;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
min=arr[0];
for(i=0;i<n;i++)
{
    if(arr[i]<min)
   {
        min=arr[i];
        
        //printf("%d",min);
    }
 }
printf("%d",min);

//getch();
}
