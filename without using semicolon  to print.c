#include<stdio.h>
#include<conio.h>
int main(void)
{
char str[200];
scanf("%[^\n]s",str);
if(printf("%s",str))
	return 0;
}
