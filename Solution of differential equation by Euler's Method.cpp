/* solution of differential equation by Euler Method */
#include<stdio.h>
#include<math.h>
#define f(x,y) (y-x)/(y+x)
 main()
{
float x0,y0,y1,xn,h;
printf("Enter the values: x0,y0,h,xn");
scanf("%f%f%f%f",&x0,&y0,&h,&xn);
printf("\n x\t\t y \n");
do
{
	printf("%f \t %f\n",x0,y0);
y1=y0+h*f(x0,y0);
x0=x0+h;
y0=y1;
}
while(x0<=xn);
}

