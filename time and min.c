#include<stdio.h>
void main()
{
    int hr,min;
    printf("enter the value");
    scanf("%d",&min);
    hr=min/60;
    min=min%60;
    printf("%d %d",hr,min);
    getch();
}
