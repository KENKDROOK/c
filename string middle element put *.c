#include<stdio.h>
#include<conio.h>
void main()
{
int i,c,l;
char a[100];
gets(a);
l=strlen(a);
c=l/2;
for(i=0;a[i]!=NULL;i++)
{
    a[c]='*';
}
printf("%s",a);
getch();
}
