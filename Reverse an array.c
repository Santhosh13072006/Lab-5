#include<stdio.h>
int main()
{
    int n,h,i;
    printf("enter no.of elements:");
    
    scanf("%d",&n);
    int a[n];
    for( i=0;i<n;i++)
    {
        printf("enter a elment:");
        scanf("%d",&a[i]);
    }
        for( i=0;i<n/2;i++)
    {
       
      h=a[i]+a[n-1-i];
      a[i]=h-a[i];
      a[n-1-i]=h-a[n-1-i];
      
    }
    for( i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        
    }
    
