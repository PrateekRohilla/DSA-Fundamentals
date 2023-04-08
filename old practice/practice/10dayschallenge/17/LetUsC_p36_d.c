#include<stdio.h>
#include<math.h>
main(){

double x,y,r,radian,theta;

printf("Enter the coordinates x &y : ");
scanf("%lf %lf",&x,&y);

r=sqrt(x*x+y*y);
radian=atan2(y,x);
theta=radian*180/3.14;    //converting into degrees
printf("\nPolar coordinates are %lf %lf",r,theta);
}
