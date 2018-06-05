#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	char S[33],n,i;
	long long int sum=0,term;
	
	while(gets(S)!=NULL)
	{
		n = strlen(S);
		for(i=0 ;i<n ;i++)
		{
			term = (S[i]-48)*pow(2,n-i-1);
			sum = sum+term;
		}
		printf("%lld\n",sum);
		sum = 0;
	}
	return 0;
}
