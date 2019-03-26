#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20];
    int n,i;
    scanf("%s",str);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
