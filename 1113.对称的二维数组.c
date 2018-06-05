#include <stdio.h>
int main()
{
	int n,S[11][11],i,j,count=0;
	
	while(scanf("%d",&n))
	{
		if(n==0)  break;
		for(i=0 ;i<n ;i++)
		    for(j=0 ;j<n ;j++)
		        scanf("%d",&S[i][j]);
		for(i=0 ;i<n ;i++)
		    for(j=0 ;j<n ;j++)
		    	if(S[i][j]!=S[j][i])  count = 1;
        if(count==1)  printf("No\n");
        if(count==0)  printf("Yes\n");
        count = 0;
	}
	return 0;
} 
