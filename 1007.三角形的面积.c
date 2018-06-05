#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	float S,p;
	scanf("%f %f %f",&a,&b,&c);
	if(a+b<c||a+c<b||b+c<a)  printf("No");
	else
	{
		p = (a+b+c)/2.0;
		S = pow(p*(p-a)*(p-b)*(p-c),0.5);
		printf("%.2f",S);
	}
	return 0;
}
