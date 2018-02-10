#include<stdio.h>
void main()
{
float si,p,t,r;
printf("\nEnter the Principal : ");
scanf("%f",&p);
printf("\nEnter the Time : ");
scanf("%f",&t);
printf("\nEnter the Rate : ");
scanf("%f",&r);
si=(p*t*r)/100;
printf("The Simple Interest is : %f",si);
}
