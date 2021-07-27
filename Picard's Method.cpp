// PICARD'S METHOD
#include<stdio.h>
#include <math.h>
#include<conio.h>
// dy/dx = 1 + xy , y(0)=1
/*#define yy1(x) (1 + (x) + pow(x,2)/2)
#define yy2(x) (1 + (x) + pow(x,2)/2 + pow(x,3)/3 + pow(x,4)/8)
#define yy3(x) (1 + (x) + pow(x,2)/2 + pow(x,3)/3 + pow(x,4)/8 + pow(x,5)/15 + pow(x,6)/48)*/
//dy/dx = x*x+y*y , y(0)=0
#define yy1(x) ( pow(x,3)/3)
#define yy2(x) ( pow(x,3)/3 + pow(x,7)/63 )
#define yy3(x) ( pow(x,3)/3 + pow(x,7)/63 +2* pow(x,11)/2079 + pow(x,15)/59535 )
main()
{
 double y1[20],y2[20],y3[20],a,n,h,i;
 int j;
 printf("\nEnter the value of range: ");

 scanf("%lf %lf",&a,&n);
 printf("\n\nEnter the h: ");
 scanf("%lf",&h);
 for(i=a,j=0;i<=n;i=i+h,j++)
 {
 y1[j]=yy1(i);
 y2[j]=yy2(i);
 y3[j]=yy3(i);
 }
 printf("\nX |");
 for(i=a;i<=n;i=i+h)
 {
 printf(" %.8lf",i);
 }
 printf("\n--------------------------------------------------------------------------------");
 printf("\n\nY1|");
 for(i=a,j=0;i<=n;i=i+h,j++)
 {
 printf(" %.8lf",y1[j]);
 }
 printf("\n\nY2|");
 for(i=a,j=0;i<=n;i=i+h,j++)
 {
 printf(" %.8lf",y2[j]);
 }
 printf("\n\nY3|");
 for(i=a,j=0;i<=n;i=i+h,j++)
 {
 printf(" %.8lf",y3[j]);
 }
}
