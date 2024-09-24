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
    printf("matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
       
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           b[i][j]=a[j][i];
       
        }
    }
    printf("transpose matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d\t",b[i][j]);
       
        }
        printf("\n");
    }
}
