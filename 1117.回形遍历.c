#include <stdio.h>
int main()
{
	int T,j,i,S[11][11],n,z;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0 ;i<n ;i++)
		    for(j=0 ;j<n ;j++)
		        scanf("%d",&S[i][j]);
		i = 0;
		j = 0;
		while(i+j==(n-1)*(n-1))
		{
		    for(j ;j<n ;j++)
		        printf("%d ",S[i][j]);
		    j = j-1;
		    i = i+1;
		    for(i ;i<n ;n++)
		        printf("%d ",S[i][j]);
		}
	}
	return 0;
}
