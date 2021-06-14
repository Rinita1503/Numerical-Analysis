//Secant method
#include<stdio.h>
#include<math.h>
//#define f(x) (x*&tan(x)+2*x*x-2.5)
#define f(x) (4*x*x*x-34.2852*x*x+88.648402*x-68.110870)
main()
{
	int n=0;
	float a,b,x;
	
	printf("\n\n Enter the value of a and b :");
	scanf("%f%f",&a,&b);
	
	if (f(a)*f(b)<0)
	{
		printf("\n n a b x f(x)\n");
		do
		{
			
			x=a-((b-a)/(f(b)-f(a))*f(a));
			printf("\n %2d %f %f %f %f",n,a,b,x,f(x));
			a=x;
			n=n+1;
		}
		while(fabs(f(x))>.000001 && n<30);
		if(fabs(f(x))<.000001)
		printf("\n\n The root is %f",x);
		else
		printf("\n The iteration does not converge");
	}
	else
	printf("\n Change the values of a and b");
	}
