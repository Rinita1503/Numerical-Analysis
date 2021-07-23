//Double root by Newton-Raphson
#include<stdio.h>
#include<math.h>
#define f(x) (pow(x,3)-0.8*x*x-0.99*x+0.81)
#define df(x) (3*x*x-1.6*x-0.99)
#define ddf(x) (6*x-1.6)
main()
{
	float a,b,c,fa,dfa,dfb,ddfb;
	int n=0;
	printf("\n\n Enter the initial value of root:");
	scanf("%f",&a);
	b=a;
	printf("\n n a b c f(b) \n");
	do
	{
		a=a-2*f(a)/df(a);
		b=b-df(b)/ddf(b);
		c=b;
		n=n+1;
		printf("\n %d %f %f %f %f",n,a,b,c,f(b));
	}
	while(fabs(a-c)>.001 && n<10);
	printf("\n\n The double root is %f",b);
}
