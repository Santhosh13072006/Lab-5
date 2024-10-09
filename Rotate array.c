#include<stdio.h>
int main()

{

int n,i,j,k;

printf("enter no. of elements in your array:");
scanf("%d",&n);

int a[n], b[1];

printf("enter array:");

for(i=0;i<n;i++)

{

scanf("%d",&a[i]);

}

printf("no.of.positions array to be rotated:");

scanf("%d",&k);

for(i=0;i<k;i++)

{

b[0]=a[0];
for(i=0;i<n-1;i++) 
{ j=i+1; 
a[i]=a[j];
}
a[n-1]=b[0];
}

for(i=0;i<n;i++)
{
    printf("a[%d]=%d",i,a[i]);
}
}
