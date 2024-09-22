#include<stdio.h>

int main()
{
      int n[15],h=0,m=0,l=0,i;
      for(i=1;i<=10;i++)
      {
      
        printf("enter number %d:", i);
        scanf("%d",&n[i]);
      }

      for(i=1;i<=10;i++) 
      {
       if(n[i]>0)
      {
       h=h+1;
       }
     else if(n[i]<0)
      {
      m=m+1;
       }
     else
          {

          l=l+1;

          }
      }
          printf("no.of.positive numbers=%d\n",h);
          printf("no.of.negative numbers=%d\n",m);
          printf("no.of.zero numbers=%d\n",l);
      
    return 0;
}
