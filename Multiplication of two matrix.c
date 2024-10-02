#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],c[4][4];
    int d,e,f,g;
    
    printf("enter matrix 1:");
    printf("enter no.of rows:");
    scanf("%d",&d);
    printf("enter no.of columns:");
    scanf("%d",&e);
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<e;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<e;j++)
        {
           
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("enter matrix 2:");
    printf("enter no.of rows:");
    scanf("%d",&f);
    printf("enter no.of columns:");
    scanf("%d",&g);
     for(int i=0;i<f;i++)
    {
        for(int j=0;j<g;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<g;j++)
        {
           
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(e==f)
    
    {
        for(int i=0;i<d;i++)
        {
            for(int j=0;j<g;j++)
            {
                 c[i][j]=0;
                for(int k=0;k<e;k++)
                {
                    c[i][j]=a[i][k]*b[k][j]+c[i][j];
                }
             }
        }
        for(int i=0;i<d;i++)
       {
        for(int j=0;j<g;j++)
        {
           
        printf("%d\t",c[i][j]);
        }
        printf("\n");
        }
        
    }
    else
    {
        printf("matrix is not possible");
    }
    
    return 0;
}
