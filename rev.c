#include<stdio.h>
void main()
{
int a,b,rev=0;
printf("Enter the number : ");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
rev=rev*10+b;
a=a/10;
}
printf("%d",rev);
}
