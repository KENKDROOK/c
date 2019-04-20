#include<stdio.h>
#include<conio.h>
void main()
{
    int k,q,p=1,t;
    scanf("%d",&k);
    t=k;
    while(t>0)
    {
        t=t/10;
        p=p*10;
    }
    p=p/10;
        while(k>0)
        {
            q=k/p;
            if(q%2!=0)
            {
                printf("%d ",q);
            }
            k=k%p;
            p=p/10;
        }
}
