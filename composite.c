#include<stdio.h>
void main()
{
int n,c=0,i;
printf("Enter a number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("\nPrime Number");
}
else
{
printf("\nComposite NUmber");
}
}
