#include<stdio.h>
int main()
{
    int h,i,n,j;
    printf("enter no.of.students:");
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n],e[n],f[n],t[n],g[n];
    
    for(i=1;i<=n;i++)
    {
        printf("enter roll no %d marks\n",i);
        printf("enter subject 1 marks:");
        scanf("%d",&a[i-1]);
        
        printf("enter subject 2 marks:");
        scanf("%d",&b[i-1]);
        
        printf("enter subject 3 marks:");
        scanf("%d",&c[i-1]);
    }
    
    for( i=0;i<n;i++)
    {
        d[i]=a[i];
        e[i]=b[i];
        f[i]=c[i];
        
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                h=a[i];
                a[i]=a[j];
                a[j]=h;
            }
            
        }
    }
    printf("max mark in subject1 is %d\n",a[n-1]);
    for(i=0;i<n;i++)
    {
        if(d[i]==a[n-1])
        {
            printf("maximum mark in subject 1 is roll no %d\n",i+1);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                h=b[i];
                b[i]=b[j];
                b[j]=h;
            }
            
        }
    }
    printf("max mark in subject 2 is %d\n",b[n-1]);
    for(i=0;i<n;i++)
    {
        if(e[i]==b[n-1])
        {
            printf("maximum mark in subject 2 is roll no %d\n",i+1);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(c[i]>c[j])
            {
                h=c[i];
                c[i]=c[j];
                c[j]=h;
            }
            
        }
    }
    printf("max mark in subject 3 is %d\n",c[n-1]);
    for(i=0;i<n;i++)
    {
        if(f[i]==c[n-1])
        {
            printf("maximum mark in subject 3 is roll no %d\n",i+1);
        }
    }
    for(i=0;i<n;i++)
    {
        t[i]=d[i]+e[i]+f[i];
    }
    for(i=0;i<n;i++)
    {
        g[i]=t[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(t[i]>t[j])
            {
                h=t[i];
                t[i]=t[j];
                t[j]=h;
            }
            
        }
    }
    printf("max  total mark  is %d\n",t[n-1]);
    for(i=0;i<n;i++)
    {
        if(g[i]==t[n-1])
        {
            printf("maximum  totalmark  is roll no %d\n",i+1);
        }
    }
    printf("Rollno:   subject 1 marks  subject 2 marks.  subject 3 marks.  total");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d",i+1,d[i],e[i],f[i],g[i]);
        printf("\n");
        
    }
}
