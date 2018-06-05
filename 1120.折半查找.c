#include <stdio.h>
int main()
{
	int x,n,T,i,count=0;
	int S[100];
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    scanf("%d",&S[i]);
		scanf("%d",&x);
	    while(n>0&&n<i-1)
	    {
		    if(count==0)  n = (n+1)/2;
	        count++;
		    if(S[n]==x)  break;
			if(S[n]>x)  n = n+(n-1)/2; 
			if(S[n]<x)  n = (n+1)/2;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
