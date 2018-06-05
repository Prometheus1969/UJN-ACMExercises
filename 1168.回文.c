#include <stdio.h>
#include <string.h>
int main()
{
	char ah[100001],bh[100001];
	int i,n,j,flag;
	
	while(gets(ah))
	{
		flag = 0;
		if(strcmp(ah,"2013")==0)  break;
		n = strlen(ah);
		for(i=0,j=0 ;i<n ;i++)
		{
		    if(ah[i]>='a'&&ah[i]<='z')
		    {
		    	bh[j] = ah[i]-32;
				j++; 
			}
			else if(ah[i]>='A'&&ah[i]<='Z')
			{
				bh[j] = ah[i];
				j++;
			}
		}
		bh[j] = '\0';
		for(i=0 ;i<j/2 ;i++)
		    if(bh[i]!=bh[j-1-i])
			{
				flag = 1;
				break;
			}
		if(flag==1)  printf("NO\n");
		else if(flag==0)  printf("YES\n");
	}
	return 0;
}
