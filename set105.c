#include<stdio.h>
int main()
{
int s,t,r;
float k;
scanf("%d %d %d",&s,&t,&r);
k=s*t*r/100;
printf("%1.f",floor(k));
    return 0;
}
