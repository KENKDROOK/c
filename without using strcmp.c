#include <stdio.h>
#include<string.h>
void main()
{
char str[50],str1[50];
int l,p;
printf("enter the string1:");
scanf("%s",str);
printf("enter the string2:");
scanf("%s",str1);
l=strlen(str);
p=strlen(str1);
if(l>p)
{
printf("\n%s",str);
}
else   
{
printf("\n%s",str1);
}
}
