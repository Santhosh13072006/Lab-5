#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0,m,i;
    printf(" no.of candidates:5\n");
    printf("voter can choose from 1 to 5\n");
    printf("enter no.of.voters:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter voter choice\n");
        scanf("%d",&m);
       
            if(m==1)
            {
                a=a+1;
            }
            else if(m==2)
            {
                b=b+1;
            }
            else if(m==3)
            {
                c=c+1;
            }
            else if (m==4)
            {
                d=d+1;
            }
            else if(m==5)
            {
                e=e+1;
            }
            else
            {
                f=f+1;
            }
        
    }
    printf("no.of.votes for candidate 1 is %d\n",a);
    printf("no.of.votes for candidate 2 is %d\n",b);
    printf("no.of.votes for candidate 3 is %d\n",c);
    printf("no.of.votes for candidate 4 is %d\n",d);
    printf("no.of.votes for candidate 5 is %d\n",e);
    printf("no.of.votes for spoit ballet is %d\n",f);
}
