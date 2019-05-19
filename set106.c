#include<stdio.h>
int main()
{
     int p,o,c,n,i;
     int sum = 0;
     scanf("%d", &p);
     scanf("%d", &o);
     scanf("%d", &c);
     n = p + (c - 1) * o;
     for(i=p;i<=n;i=i+o)
     {
             sum=sum+i;

     }
     printf("%d",sum);
    return 0;
}
