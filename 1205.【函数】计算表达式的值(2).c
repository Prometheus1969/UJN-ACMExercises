#include <stdio.h>
#include <math.h>
int main()
{
	int i,n;
	double sum=0,term;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1 ;i<=n ;i++)
	    {
	    	term = pow(-1.0,i-1)*(2*i+1)/(4*i*i);
	    	sum = sum+term;
		}
		printf("%.6lf\n",sum);
		sum = 0;
	}
	return 0;
}
