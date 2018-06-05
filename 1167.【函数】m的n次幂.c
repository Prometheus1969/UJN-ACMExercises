#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,answer;
	
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		answer = pow(m,n);
		printf("%d\n",answer);
	}
	return 0;
}
