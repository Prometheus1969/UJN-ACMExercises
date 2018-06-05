#include <stdio.h>
int main()
{
	int T,n,S[90],i,x;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		scanf("%d",&x);
		for(i=0 ;i<n ;i++)
		    if(S[i]%x==0||S[i]/10==x||S[i]%10==x)
		        printf("%d\n",S[i]);
	}
	return 0;
}
