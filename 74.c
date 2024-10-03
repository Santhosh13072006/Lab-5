#include<stdio.h>
int main()
{
    int h,i,j,n,k,l;
    printf("enter array 1:");
    printf("total numbers:");
    scanf("%d",&h);
    int a[h];
  
    for(i=0;i<h;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    printf("enter array 2:");
    printf("total numbers:");
    scanf("%d",&n);
    int b[n];
  
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d",&b[i]);
    }
    int c[n+h];
    for(i=0;i<h;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        c[h+i]=b[i];
    }
    for(i=0;i<h+n;i++)
   {
       printf("c[%d]=%d",i,c[i]);
   }
    
    k=n+h;
    
    
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(c[i]>c[j])
            {
                l=c[i];
                c[i]=c[j];
                c[j]=l;
            }
        }
    }
   for(i=0;i<k;i++)
   {
       printf("c[%d]=%d",i,c[i]);
       printf("\n");
   }
    
    return 0;
}
