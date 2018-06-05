#include <stdio.h>
int main()
{
	int T,n,i;
	double s=1;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=1 ;i<=n ;i++)
		    s = s*i;
		printf("%.0lf\n",s);
		s = 1;
	}
	return 0;
 } 
