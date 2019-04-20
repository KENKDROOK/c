#include <stdio.h>
#include <conio.h>
void main()
{
	int n,m,sub;
	scanf("%d %d",&n,&m);
	sub=abs(n-m);
	if(sub%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
