#include <stdio.h>
int main()
{
	int n,i;
	double sum=0,term;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1 ;i<=n ;i++)
		{
		    term = ((2*i-1)*(2.0*i+1))/(4*i*i);
			sum = sum+term;
		}
		printf("%.6lf\n",sum);
		sum = 0;
	}
	return 0;
}
