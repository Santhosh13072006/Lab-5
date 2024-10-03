#include<stdio.h>
int main()
{
    int r=4,i,j,h=3,k;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*(h-i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}
