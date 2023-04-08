#include<stdio.h>
#include<math.h>
main(){

double a,b,c;
double s,area;

printf("Enter the three sides of triangle: ");
scanf("%lf %lf %lf",&a,&b,&c);

s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));

printf("\n\nArea of the triangle is %.2lf",area);
}
