#include<stdio.h>
int main()
{
     int i,j,a,k,m,l;
     printf("enter no.of rows:");
     scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
         {
              printf(" ");
         }
         for(k=1;k<=i;k++)
         {
            
              printf("%d",k);
         }
        
        for(m=1;m<=i;m++)
        {
            l=i-m;
            if(l<=0)
            {
                printf(" ");
            }
            else
            {
                printf("%d",l);
            }
        }
        printf("\n");
        
    }
     return 0;
}
 
