#include <stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d",&x);
	if(x<3)
	    y = 95*x;
	else
	    y = 95*x*0.85;
	printf("%.2lf",y);
	return 0;
}
