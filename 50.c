#include<stdio.h>
int main()
{
    int i,j,a,h;
    char A,B,C,D,E;
    
    for(i=1;i<=5;i++)
    {
        switch(i)
        {
                case 1:{
                       h=65;
                       break;
                       }
                case 2:{
                       h=66;
                       break;
                       }
                case 3:{
                       h=67;
                       break;
                       }
                case 4:{
                       h=68;
                       break;
                       }
                default:{
                        h=69;
                       }
            }
        for(j=1;j<=5;j++)
        {
            
          
               
            if(i>=j)
             {
                     
                 printf("%c",h);
                          
                     
             }
        }
        printf("\n");
        
        
    }
     return 0;
}
