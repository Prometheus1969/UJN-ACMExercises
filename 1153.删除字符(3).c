#include <stdio.h>
#include <string.h>
int main()
{
	char AH[101],BH[101];
	int i,n,j,count=0,z=0;
	
	while(gets(AH)!=NULL)
	{
		n = strlen(AH);
		for(i=0 ;i<n ;i++)
		{
		    for(j=0 ;j<i-1 ;i++)
		        if(AH[i]!=AH[j])  count = 1;
		    if(count==0)
		    {
			    BH[z] = AH[i];
			    z++;
			}
			count = 0;
		}
		BH[z] = '\0';
		puts(BH);     
		z = 0;  
	}
	return 0;
}
