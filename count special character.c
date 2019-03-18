#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[10];
    int i,c;
    printf("enter the value");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            continue;
        }
        else
        {
            c++;
        }
    }
    printf("%d",c);
    
}
