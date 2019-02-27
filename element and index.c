#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
        
    }
    for(i=0;i<n;i++)
    {
    printf("\n%d",a[i]);
    printf("%d",i);
    }
    getch();
}
