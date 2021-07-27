// MODIFIED EULER'S METHOD
#include<stdio.h>
#include<math.h>
#define F(x,y) (y-x)/(y+x)
main ()
{
int i,n,itr ;
float x[50],y[50],yc[50],h,yp,p,xn;
printf("\n Enter the values: x[1],y[1],h,xn:- ");
scanf("%f%f%f%f",&x[1],&y[1],&h,&xn);
yp=y[1]+h*F(x[1],y[1]);
itr=(xn-x[1])/h;
printf("\n\n X=%2f Y=%f\n",x[1],y[1]);
for (i=1;i<=itr;i++)
{
x[i+1]=x[i]+h;
for (n=1;n<=50;n++)
{
yc[n+1]=y[i]+(h/2.0)*(F(x[i],y[i])+F(x[i+1],yp));
printf("\nN=%2d Y=%f",n,yc[n+1]);
p=yc[n+1]-yp;
if(fabs (p)<0.0001)
goto next;
else
yp=yc[n+1];
}
next:
y[i+1]=yc[n+1];
printf("\n\n X=%2f Y=%f\n",x[i+1], yp);
}
}
