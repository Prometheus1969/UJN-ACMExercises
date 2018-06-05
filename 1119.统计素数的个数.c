#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,m,n,count=0,k,flag=0;
	int max,min;
	
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		max = (m>n)?m:n;
		min = (m>n)?n:m;
		for(i=min ;i<=max ;i++)
		{
			k = sqrt(i);
			for(j=2 ;j<=k ;j++)
				if(i%j==0)
				{
				    flag = 1;
				    break;
				}
	        if(flag==0)  count++;
	        flag = 0;
		}
		printf("%d\n",count);
		count = 0;
	}
	return 0;
}
