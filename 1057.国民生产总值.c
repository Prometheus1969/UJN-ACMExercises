#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=1,year=0;
    double GDP=1.0;
    scanf("%d",&n);
    while(GDP<pow(2,n))
    {
    	GDP = 1.075*GDP;
    	year++;
	}
	printf("%d\n",year);
	return 0;
}


