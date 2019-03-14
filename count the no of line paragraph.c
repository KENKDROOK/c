#include<stdio.h>
#include<conio.h>
void main()
{
    int i,c=0,l,g;
    char str[50];
    printf("enter the value");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if((str[i])=='.')
        //if(str[i]=' ')
        {
              c++;
        }
        //printf("%d",c);
    }
   printf("%d",c+1);
}
