#include<stdio.h>
int main()
{
    int r,i,j,h;
    printf("no.of rows:");
    scanf("%d",&r);
    
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i+j>=6)
            {
                
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
