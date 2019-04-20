#include <stdio.h>
#include <conio.h>
void main()
{
	int m,n,i,count=0;;
	int str[30];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	scanf("%d",&str[i]);
	for(i=0;i<m;i++)
	{
		
	 if(str[i]==n)
		{
			count=count+1;
		}
	}
   printf("%d",count);
}
