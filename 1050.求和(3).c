#include <stdio.h>
int main()
{
	int n,i;
	double term,sum=1;
	scanf("%d",&n);
	for(i=1 ;i<=n/2 ;i++)
	{
		term = 1.0/(2*i);
		sum = sum+term; 
	}
	printf("%.6lf",sum);
	return 0;
}
