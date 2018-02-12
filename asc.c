#include<stdio.h>
void main()
{
int n,a[1000],i,j,t;
printf("Enter a number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0,j=i+1;i<=n;i++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}printf("%d",a[i]);
}
}
