#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101],*p=ch;
	int n,i;
	
	while(gets(ch)!=NULL)
	{
		n = strlen(ch);
		for(i=0 ;i<n ;i++)
			if(*(p+i)>='a'&&*(p+i)<='j')
			    *(p+i) = *(p+i)-49;
		puts(ch);
	}
	return 0;
}
