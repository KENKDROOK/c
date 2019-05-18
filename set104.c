#include<stdio.h>
int main()
{
    int a[100],n,d,i;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[d-1]);
    return 0;
}
