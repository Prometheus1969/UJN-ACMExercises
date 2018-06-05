/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[999];
	int i,n;
	
	while(gets(str)!=NULL)
	{
		n = strlen(str);
		str[0] = str[0]-32;
		for(i=1 ;i<n-2 ;i++)
		    if(str[i]=='.'||str[i]=='?'||str[i]=='!')
		        str[i+2] = str[i+2]-32;
		puts(str);
	}
	return 0;
}
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i, j ,t, n, v;
    while(gets(s)!=NULL)
    {
        int word = 1;
        for(i=0; s[i]!='\0'; i++)
        {
            if(word == 1)
            {
                if((s[i]>='a')&&(s[i]<='z'))
                {
                    s[i] -= 32;
                    word = 0;
                }
            }
            else
            {
                if((s[i] == '?')||(s[i] == '.')||(s[i] == '!'))
                    word = 1;
            }
        }
        puts(s);
    }
    return 0;
}
