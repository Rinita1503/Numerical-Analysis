// NEwton-Raphson
#include<stdio.h>
#include<math.h>
#define f(x) (4*x*x*x-34.2852*x*x+88.648402*x-68.110870)
#define df(x) (12*x*x-68.5704*x+88.648402)

main()
{
	float a,x0,x1,h;
	int n=0;
	printf("\n\n Enter the value of x0 :");
	scanf("%f",&a);
	x0=a;
	printf("\n n h x0 f(x0) df(x0)\n");
	do
{
    h=-f(x0)/df(x0);
    x1=x0+h;
    x0=x1;
    n=n+1;
    printf("\n %d %f %f %f %f",n,h,x0,f(x0),df(x0));
}
    while(fabs(h)>.000001 && n<10);
    printf("\n\n The root is %f",x0);
}
