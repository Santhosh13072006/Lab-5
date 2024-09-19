#include<stdio.h>
int main()
{
    int n[150],h,i,j,a;
    printf("total numbers:");
    scanf("%d",&h);
    
    for(i=0;i<h;i++)
    {
        printf("enter a number:");
        scanf("%d",&n[i]);
    }
    for(i=0;i<h;i++)
    {
        for(j=i+1;j<h;j++)
        {
            if(n[i]>n[j])
            {
                a=n[i];
                n[i]=n[j];
                n[j]=a;
            }
        }
    }
    printf(" max=%d\n",n[h-1]);
    printf("min=%d\n",n[0]);
    
    return 0;
}
