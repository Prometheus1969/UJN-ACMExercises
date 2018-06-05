#include <stdio.h>
int main()
{
	int n,i;
	double sum=0,term;
	scanf("%d",&n);
	for(i=1 ;i<=n ;i++)
	{
		term = 1.0/(i*(i+1));
		sum = sum+term;
	}
	printf("%.6lf",sum);
	return 0;
} 
