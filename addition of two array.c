#include<stdio.h>
int main()
{

   int a[15],i,b[15],c[15];
   for(i=1;i<=5;i++)
   {
       printf("enter number %d:", i); 
       scanf("%d",&a[i]);
   }
    for(i=1;i<=5;i++)
    {
        printf("enter number %d:", i);
        scanf("%d",&b[i]);
    }
    for(i=1;i<=5;i++) 
    {
        
        c[i]=a[i]+b[i];
        printf("c[%d]=%d\n",i,c[i]);
    }

return 0;

}
