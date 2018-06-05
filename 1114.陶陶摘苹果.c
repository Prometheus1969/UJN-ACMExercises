#include <stdio.h>
int main()
{
	int T,n,S[10],i,x,count=0;
	
	scanf("%d",&T);
	while(T--)
	{
		for(i=0 ;i<10 ;i++)
		    scanf("%d",&S[i]);
		scanf("%d",&x);
		for(i=0 ;i<10 ;i++)
		    if(S[i]<=x+30)  count++;
		printf("%d\n",count);
		count = 0;
	}
	return 0;
}
