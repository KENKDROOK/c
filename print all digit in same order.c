#include<stdio.h>
#include<conio.h>
int main() {
	char a[100];
	int i;
	printf("enter the value");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c ",a[i]);
	}
}
