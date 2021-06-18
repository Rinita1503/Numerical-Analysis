//Bisection method
#include<stdio.h>
#include<math.h>
#define f(x) (x*tan(x)+2*x*x-2.5)
main()
{
	int n=0;
	float a,b,x;
	
	printf("\n\n Enter the value of a and b :");
	scanf("%f%f",&a,&b);
	
	if(f(a)*f(b)<0)
	{
		printf("\n n a b x f(x)\n");
			do
			{
				x=(a+b)/2;
				printf("\n %2 %f %f %f %f",n,a,b,x,f(x));
				
				if(f(a)*f(x)<0)
				b=x;
				
				else
				a=x;
				n=n+1;
			}
			while(fabs(f(x))>.000001 && n<30);
			printf("\n\n The root is %f", x);
	}
	else
	printf("\n Change the values of a and b");	
}

