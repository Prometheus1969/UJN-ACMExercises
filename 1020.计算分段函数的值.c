#include <stdio.h>
#include <math.h>
int main()
{
	double x;
	double y;
	scanf("%lf",&x);
	if(x<-1)
	    y = pow(x,3)-1;
	else if(x<=1)
	    y = -3*x+1;
    else if(x<=10)
        y = 3*exp(2*x-1)+5;
    else
        y = 5*x+3*log10(2*x*x-1)-13;
    printf("%.2lf",y);
    return 0;
}
