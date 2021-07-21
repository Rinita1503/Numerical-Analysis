//Sum of 1/1 + 1/2 + 1/3 +.....+ 1/N
#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	float sum=0.0;
	printf("\nEnter the value of N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum=1.0/i;
	}
	printf("\n Required sum is %f",sum);
}
