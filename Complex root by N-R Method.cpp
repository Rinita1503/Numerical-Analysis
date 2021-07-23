/* Complex root by N-R Method (based on solving a system of nonlinear equations ) */
#include<stdio.h>
#include<math.h>
//F(z) = z^4+z^3+5z^2+4z+4 ; z=x+iy
#define f(x,y) (pow(x,4)-6*x*x*y*y+pow(y,4)+pow(x,3)-3*x*y*y+5*x*x-5*y*y+4*x+4)
#define fx(x,y) (4*pow(x,3)-12*x*y*y+3*x*x-3*y*y+10*x+4)
#define fy(x,y) (-12*x*x*y+4*pow(y,3)-6*x*y-10*y)
#define g(x,y) (4*pow(x,3)*y-4*x*pow(y,3)+3*x*x*y-pow(y,3)+14*x*y)
#define gx(x,y) (12*x*x*y-4*pow(y,3)+6*x*y+14*y)
#define gy(x,y) (4*pow(x,3)-12*x*y*y+3*x*x-3*y*y+14*x)
main()
{
int i=0, maxit=10;
float eps=0.000001,x0,y0,x1,y1,J,h,k;

printf("Enter initial guesses for x and y\n");
scanf("%f %f",&x0, &y0);
printf("\n i x0 y0 f(x0,y0) g(x0,y0)\n");
do
 {
 J=fx(x0,y0)*gy(x0,y0)-gx(x0,y0)*fy(x0,y0);
 h=(-f(x0,y0)*gy(x0,y0)+g(x0,y0)*fy(x0,y0))/J;
 k=(-g(x0,y0)*fx(x0,y0)+f(x0,y0)*gx(x0,y0))/J;
x0=x0+h;
y0=y0+k;
i=i+1 ;
printf("\n %d %f %f %f %f",i,x0,y0,f(x0,y0),g(x0,y0));
}
while (fabs(f(x0,y0))>eps&&fabs(g(x0,y0))>eps&&i<maxit);
{
printf("\n\n One root is (%f)+i( %f ) ",x0,y0);
 }
}
