//Simpson's rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (log(x+4))/(x*x+8*x+17)

main()
{
	float l,u,x,h,sum,simp;
	int i,n,k;
	/*Input*/
	printf("Enter lower limit of integration:");
	scanf("%f",&l);
	printf("Enter upper limit of intergration ");
	scanf("%f",&u);
	printf("Enter number of sub intervals:");
	scanf("%d",&n);
	
	/*a=a*22/(7*180);
	b=b*22/(7*180);*/
	h=(u-l)/n;
	k=4;
	x=l+h;
	
	/*Finding Integration Value*/
	sum=f(l)+f(u);
	for(i=1;i<=n-1;i++)
	{
		sum=sum+k*f(x);
		k=6-k;
		x=x+h;
	}
	simp=sum*h/3;
	printf("\nRequired value of integration is: %f",simp);
	return 0;
}
