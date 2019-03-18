#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,i;
    char str[20];
    printf("enter the string");
    scanf("%s",str);//gets(str);
    printf("enter the times");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n%s",str);
    }
    
}
