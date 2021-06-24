//Newton's Divided Difference
#include<stdio.h>
main()
{
	double x[10],y[10],p[10],k,f1=1.0,f2=0.0,f;
	int n,i,j=1;
	printf("\nEnter the number of observations:\n");
	scanf("%d",&n);
	 printf("\nEnter the elements of x:\n");
    for(i=0;i<n;i++)
    
    scanf("%lf",&x[i]);
    
    printf("\nThe corresponding values of y are:\n");
    for(i=0;i<n;i++)
    
    scanf("%lf",&y[i]);
    
    f=y[1];
    printf("\nEnter the value of 'k' in f(k) you want to evaluate:\n");
    scanf("%lf",&k);
    do
    {
    for(i=1;i<=n-1;i++)
    	{
    		p[i]=((y[i+1]-y[i])/(x[i+j]-x[i]));
    		y[i]=p[i];
				}
				f1=1;
				for(i=1;i<=j;i++)
				{
					f1*=(k-x[i]);
				}
				f2+=(y[1]*f1);
				n--;
				j++;
			}
			while(n!=1);
			f+=f2;
	printf("\nf(%f)=%f",k,f);
}


