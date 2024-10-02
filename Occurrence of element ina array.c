#include<stdio.h>
int main()
{
    int i,n,h=0;
    printf("enter no.of.elements in array:");
    scanf("%d",&n);
    int a[n],m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter required number:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
           h=h+1;
            
        }
    }
    printf("no.of.times element appered in array=%d",h);
}
