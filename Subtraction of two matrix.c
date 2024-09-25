#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],c[4][4];
    printf("enter matrix 1:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("enter matrix 2:");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           c[i][j]=a[i][j]-b[i][j];
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
