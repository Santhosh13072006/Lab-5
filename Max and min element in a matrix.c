#include<stdio.h>
int main()
{
    
    int d,e,i,j,k,m;
    
    printf("enter matrix 1:\n");
    printf("enter no.of rows:");
    scanf("%d",&d);
    printf("enter no.of columns:");
    scanf("%d",&e);
    int a[d][e],h[d+e];
    for( i=0;i<d;i++)
    {
        for( j=0;j<e;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for( i=0;i<d;i++)
    {
        for( j=0;j<e;j++)
        {
           
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<d;i++)
    {
        
        for(j=0;j<e;j++)
        {
            h[j]=a[i][j];
            
        }
        for(j=0;j<e;j++)
        {
            for(m=1;m<e;m++)
            if(h[j]>h[m])
            {
                k=h[j];
                h[j]=h[m];
                h[m]=k;
            }
        }
        for(j=0;j<e;j++)
        {
            a[i][j]=h[j];
        }
    }
        for( i=0;i<d;i++)
    {
        for( j=0;j<e;j++)
        {
           
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    for(j=0;j<e;j++)
    {
        
        for(i=0;i<d;i++)
        {
            h[i]=a[i][j];
            
        }
        for(i=0;i<d;i++)
        {
            for(m=1;m<d;m++)
            {
                
            
            if(h[i]>h[m])
            {
                k=h[i];
                h[i]=h[m];
                h[m]=k;
            }
            }
        }
        for(i=0;i<d;i++)
        {
            a[i][j]=h[i];
        }
    }
    for( i=0;i<d;i++)
    {
        for( j=0;j<e;j++)
        {
           
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("max element=%d",a[d-1][e-1]);
    printf("min element=%d",a[0][0]);
    return 0;
}
    
