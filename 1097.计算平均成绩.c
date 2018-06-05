#include <stdio.h>
int main()
{
	int T,i,sum=0,pass=0,n;
	int S[100];
	double ave;
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		{
			scanf("%d",&S[i]);
			sum = sum+S[i];
		}
		ave = sum/(1.0*n);
		for(i=0 ;i<n ;i++)
		{
			if(S[i]>ave)  pass++;
		}
		printf("%.2lf %d\n",ave,pass);
		sum = 0;
		pass = 0;
		T--;
	}
	return 0;
 } 
