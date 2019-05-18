#include<stdio.h>
int main()
   {
       int a[100],n,p=1,i;
       scanf("%d",&n);
       for(i=0;i<n;i++)
       {
           scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
           p=p*a[i];
       }
       printf("%d",p);
       return 0;
   }
