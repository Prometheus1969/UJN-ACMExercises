#include <stdio.h>
#include <string.h>
int main()
{
	char ch[101],ah[101];
	int n,i,j,flag;
	
	while(gets(ch)!=NULL)
	{
		n = strlen(ch);
		for(i=0,j=n/3-1 ;i<n/3 ;j--)
        {
        	ah[i*3] = ch[j*3];
        	ah[i*3+1] = ch[j*3+1];
        	ah[i*3+2] = ch[j*3+2];
        	i++;
		}
		ah[n] = '\0';
		ch[n] = '\0';
		flag = strcmp(ah,ch);
		if(flag==0)  printf("Yes\n");
		else  printf("No\n");
	}
	return 0;
}
