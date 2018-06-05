#include <stdio.h>
int main()
{
	int ah[10],bh[10],ch[20];
	int m,n,i,j,g,middle;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		for(i=0 ;i<m ;i++)
		{
		    scanf("%d",&ah[i]);
		    ch[i] = ah[i];
		}
		for(j=0 ;j<n ;j++,i++)
		{
		    scanf("%d",&bh[j]);
		    ch[i] = bh[j];
		}
		for(j=0 ;j<n+m-1 ;j++)
		    for(g=0 ;g<n+m-1-j ;g++)
		        if(ch[g]>ch[g+1])
		        {
		        	middle = ch[g];
		        	ch[g] = ch[g+1];
					ch[g+1] = middle; 
				}
		for(j=0 ;j<m+n-1 ;j++)
		    printf("%d ",ch[j]);
		printf("%d\n",ch[m+n-1]);
	}
	return 0;
 } 
