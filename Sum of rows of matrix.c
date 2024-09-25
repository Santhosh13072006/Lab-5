#include<stdio.h>
int main()
{
    int a[4][4],h;
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
    
    for(int i=0;i<3;i++)
    {
        h=0;
        for(int j=0;j<3;j++)
        {
             
           h=h+a[i][j];
        
        }
        printf("sum of %d row=%d",i+1,h);
        printf("\n");
    }
    
    return 0;
}
