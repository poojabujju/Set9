#include<stdio.h>
void main()
{
int a,b,c,d;
printf("\nEnter a and b : ");
scanf("%d%d",&a,&b);
printf("\nEnter the divisor : ");
scanf("%d",&c);
d=a*b%c;
printf("%d",d);
}
