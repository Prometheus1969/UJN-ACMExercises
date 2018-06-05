#include <stdio.h>
#include <math.h>
int main()
{
	const double PI=4.0*atan(1.0);
	double M = 6*pow(10,24);                                
	double R = 6.371*pow(10,6);                             
	double H,T;                                             
	scanf("%lf",&T);
	H = pow((6.67*pow(10,-11)*M*pow(T,2))/(4*PI*PI),1.0/3)-R;
	printf("%.0lf",H);        
	return 0;
}
