#include<stdio.h>
int main()
    {
        int a,b,c,k;
        scanf("%d %d %d",&a,&b,&c);
        k=a*b;
        k=k%c;
        printf("%d",k);
    return 0;
    }
