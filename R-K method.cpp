/* R-K method*/
#include<stdio.h>
#include<stdio.h>
#define f(x,y) (0.5-x+y*y/1+y+x*x)
main()
{
	float x0,y0,m1,m2,m3,m4,m,y,x,h,xn;
	printf("Enter the value of x0,y0,h,xn");
	scanf("%f %f %f %f",&x0,&y0,&h,&xn);
	printf("\n x\t\t y \n");
	do
	{
		float k1=f(x0,y0);
		float k2=f((x0+h/2),(y0+k1*h/2));
		float k3=f((x0+h/2),(y0+k2*h/2));
		float k4=f((x0+h),(y0+k3*h));
		float y1=y0+h*(k1+2*k2+2*k3+k4)/6;
		x0=x0+h;
		y0=y1;
		printf("%f \t %f\n",x0,y0);
	}
	while(x0<xn);
}
