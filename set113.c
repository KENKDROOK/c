#include<stdio.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[0]>='a' && s[0]<='z')
        {
            s[0]=s[0]-32;
        }
        else
        {
            s[0]=s[0];
        }
        if(s[i]==' ')
        {
            if(s[i+1]>='a' && s[i+1]<='z')
        {
            s[i+1]=s[i+1]-32;
        }
        else
        {
            s[i+1]=s[i+1];
        }
        } 
    }
    puts(s);
    return 0;
}
