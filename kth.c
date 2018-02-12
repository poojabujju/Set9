#include<stdio.h>
void main()
{
int a[4],b,i,n;
printf("Enter the Number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter a Number to print: ");
scanf("%d",&b);
printf("the Number is : %d",a[b]);
}
