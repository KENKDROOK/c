#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10];
    int i,flag=0;
    printf("Enter any character: ");
    scanf("%s",ch);
    for(i=0;ch[i]!=0;i++)
    if( (ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z'))
    {
        flag=1;
    }
    if(ch[i]>='0' && ch[i]<='9')
    {
        flag=1;
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
        return 0;
}
