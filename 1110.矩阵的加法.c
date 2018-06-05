#include <stdio.h>
int main()
{
	int m,n,i,j;
	int S[11][11],A[11][11],T[11][11];
	
	while(scanf("%d %d",&m,&n))
	{
		if(m==0&&n==0)  break;
		for(i=0 ;i<m ;i++)
		    for(j=0 ;j<n ;j++)
		        scanf("%d",&S[i][j]);
		for(i=0 ;i<m ;i++)
		    for(j=0 ;j<n ;j++)
		        scanf("%d",&A[i][j]);
		for(i=0 ;i<m ;i++)
		    for(j=0 ;j<n ;j++)
		        T[i][j] = S[i][j]+A[i][j];
		for(i=0 ;i<m ;i++)
		{
			for(j=0 ;j<n-1 ;j++)
			    printf("%d ",T[i][j]);
			printf("%d\n",T[i][n-1]);
		}
	}
	return 0;
}
