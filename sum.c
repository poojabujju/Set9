#include<stdio.h>
void main()
{
int n,i,sum=0,a[10];
printf("\nEnter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\nSum = %d",sum);
}
