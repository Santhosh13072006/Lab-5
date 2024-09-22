
#include<stdio.h>
int main()
{
    int n[15],i,h=0,m=0;
    for (i=1;i<=10;i++)
    {
        printf("enter number %d:",i);
        scanf("%d",&n[i]);
    }
    for (i=1;i<=10;i++)
    {
        if(n[i]/2== 0)
        {
            h = h+1;
        }
        else
        {
            m = m+1;
        }
    }
    printf("no.of.odd numbers=%d\n",m);
    printf("no.of.even numbers=%d",h);
    return 0;
}
