#include <stdio.h>
#include <string.h>
int main()
{
	int T,i,n,j=0;
	char Old[101],New[101];
	
	scanf("%d\n",&T);
	while(T--)
	{
		gets(Old);
		n = strlen(Old);
		for(i=0 ;i<n ;i++)
		    if((Old[i]>='A'&&Old[i]<='Z')||(Old[i]>='a'&&Old[i]<='z'))
		    {
		    	New[j] = Old[i];
		    	j++;
			}
		New[j] = '\0';
		puts(New);
		j=0;
	}
	return 0;
}
