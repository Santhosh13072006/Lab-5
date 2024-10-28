#include <stdio.h>
#include <string.h>
int main()

{
    char s[100];
    int n,i,h[100],j,a;
    printf("enter string 1\n");
    gets(s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        h[i]=s[i];
    }

     for(i=0;i<n;i++)

     {
         for(j=i+1;j<n;j++)
         {
            if(h[i]>h[j]) 
           {
            a=h[j];
            h[j]=h[i];
            h[i]=a;
             
           }

         }    
     }
     for(i=0;i<n;i++)
     {
      printf("%c",h[i]);
     }
    
      
}
