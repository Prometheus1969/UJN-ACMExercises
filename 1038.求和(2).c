#include <stdio.h>
int main()
{
	int i,m,n,t;
	int sum=0;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(m>n)
		{
			t = m;
			m = n;
			n = t;
		}
		for(i=m ;i<=n ;i++)
			if(i%3==0&&i%5==0)
			    sum = sum+i;
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
