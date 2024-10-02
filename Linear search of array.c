#include<stdio.h>
int main()
{
    int i,n;
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
            printf("%d element of array",i+1);
            
        }
    }
}
