#include <stdio.h>
int main()
{
	int n,i=0;
	int S[1000],sum=0;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)  break;
		for(i=0 ;i<n ;i++)
			scanf("%d",&S[i]);
		if(n==1)  sum = sum+6*(S[0]-0);
		for(i=0 ;i<n-1 ;i++)
		{
			if(i==0)  sum = sum+6*(S[i]-0);
			if(S[i]<S[i+1])  sum = sum+6*(S[i+1]-S[i]);
			if(S[i]>S[i+1])  sum = sum+4*(S[i]-S[i+1]);
		}
		sum = sum+5*n;
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
