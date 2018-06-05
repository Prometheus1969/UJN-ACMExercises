#include <stdio.h>
#define PI 3.14
int main()
{
	float r;
	float S,C;
	scanf("%f",&r);
	C = 2*PI*r;
	S = PI*r*r;
	printf("%.2f %.2f",C,S);
	return 0;
}
