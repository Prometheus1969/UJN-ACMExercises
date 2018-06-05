#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,sum=0;
	char x,ch[101];
	
	while(scanf("%c\n",&x)!=EOF)
	{
		gets(ch);
		n = strlen(ch);
		for(i=0 ;i<n ;i++)
		{
			if(x>='A'&&x<='Z')
			    if(ch[i]>='a'&&ch[i]<='z')  ch[i] = ch[i]-32;
			else if(x>='a'&&x<='z')
			    if(ch[i]>='A'&&ch[i]<='Z')  ch[i] = ch[i]+32;
		    if(ch[i]==x)
		        sum++;
		}
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
 } 
