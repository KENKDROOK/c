#include<stdio.h>
int main()
{
    int l,h,b,k,p;
    scanf("%d %d %d",&l,&b,&h);
    k=(l*b*h);
    p=(2*l*b)+(2*b*h)+(2*h*l);
    printf("%d\n%d",p,k);
    return 0;
}
