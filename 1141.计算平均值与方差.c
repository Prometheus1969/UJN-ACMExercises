#include <stdio.h>
#include <math.h>
int main()
{
	int n,S[20],i,sum=0;
	double aver,fc;
	
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		for(i=0 ;i<n ;i++)
		    sum = sum+S[i];
		aver = 1.0*sum/n;
		for(i=0 ;i<n ;i++)
		    fc = fc+pow(S[i]-aver,2);
		printf("%.2lf\n",aver);
		sum = 0;
	}
	return 0;
}
