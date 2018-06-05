#include <stdio.h>
int jc(int x)
{
	int i,term=1;
	for(i=1 ;i<=x ;i++)
	    term = term*i;
	return term;
}
int main()
{
	int k,m,n,kj,mj,nj;
	double answer;
	
	while(scanf("%d %d %d",&k,&m,&n)!=EOF)
	{
		kj = jc(k);
		mj = jc(m);
		nj = jc(n);
		answer = 1.0*kj/(mj+nj);
		printf("%.6lf\n",answer);
	}
	return 0;
}
