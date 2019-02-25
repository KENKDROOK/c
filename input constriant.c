#include<stdio.h>
#include<conio.h>
void main()
{
int n,ar[50],i,temp,j;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
   if(arr[i]>ar[j])
    {
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
     }
  }
}
for(j=0;j<n;j++)
{
    printf("%d",ar[j]);
    }
}
