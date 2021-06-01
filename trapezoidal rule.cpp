//Trapezoidal rule
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+pow(x,2))

main()
{
	float l,u,sum=0.0,h,k,integration;
	int i,n;
	/*Input*/
	printf("Enter lower limit of integration:");
	scanf("%f",&l);
	printf("Enter upper limit of intergration ");
	scanf("%f",&u);
	printf("Enter number of sub intervals:");
	scanf("%d",&n);
	
	/*Calculation*/
	/*Finding step size*/
	h=(u-l)/n;
	
	/*Finding Integration Value*/
	sum=f(l)+f(u);
	for(i=1;i<=n-1;i++)
	{
		k=l+i*h;
		sum=sum+2*f(k);
	}
	integration=sum*h/2;
	printf("\nRequired value of integration is: %f",integration);
	getch();
}
