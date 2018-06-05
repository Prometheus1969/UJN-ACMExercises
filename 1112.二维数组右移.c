#include <stdio.h>
int main()
{
	int m,n,i,j,S[11][11],B[11][11];
	
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(i=0 ;i<m ;i++)
		    for(j=0 ;j<n ;j++)
		        scanf("%d",&S[i][j]);
		for(i=0 ;i<m ;i++)
		    B[i][0] = S[i][n-1];
		for(i=0 ;i<m ;i++)
		    for(j=1 ;j<n ;j++)
		        B[i][j] = S[i][j-1];
		for(i=0 ;i<m ;i++)
		{
			for(j=0 ;j<n-1 ;j++)
			    printf("%d ",B[i][j]);
			printf("%d\n",B[i][j]);
		}
	}
	return 0;
 } 
