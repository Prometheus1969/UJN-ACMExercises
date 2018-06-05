#include <stdio.h>
int main()
{
	int S[100];
	int n,sum=0,i,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
        for(i=0 ;i<n ;i++)
        {
        	scanf("%d",&S[i]);
        	sum = sum+S[i];
		}
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
