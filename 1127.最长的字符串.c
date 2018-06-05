#include <stdio.h>
#include <string.h>
int main()
{
	int T,g,n,m,X;
	char AH[101],BH[101],CH[101];
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d\n",&X);	
		g = X;
		while(X--)
		{
		    gets(AH);
		    if(X==g-1)
		    {
		        strcpy(BH,AH);
		        strcpy(CH,AH);
		    }
		    n = strlen(AH);
		    m = strlen(BH);
		    if(n>m)  strcpy(CH,AH);
		    strcpy(BH,AH);
		}
		puts(CH);
	}
	return 0;
} 
