#include<stdio.h>
void main()
{
float tsa,vol,l,b,w;
printf("Enter the Breadth , length , Width Respectively : ");
scanf("%f\t%f\t%f",&b,&l,&w);
tsa=(2*(l*b+l*w+b*w));
vol=(l*b*w);
printf("\nTotal Surface Area of a Cuboid : %f",tsa);
printf("\nVolume of a Cuboid : %f",vol);
}
