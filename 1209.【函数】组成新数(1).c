/*
#include <stdio.h>
#include <string.h>
void GOT(char ah[2000],char ch[2000])
{
	int i,n,k=0,g;
	n = strlen(ah);
	for(i=0 ;i<n ;i++)
		if((ah[i]-48)%2==0||ah[i]=='0')
		{
			ch[k] = ah[i];
			k++;
		}
	ch[k] = '\0';
	if(k!=0)
	{
	    for(i=0 ;i<k/2 ;i++)
	    {
		    g = ch[i];
		    ch[i] = ch[k-1-i];
		    ch[k-i-1] = g; 
	    }
	    puts(ch);
	}
	if(k==0)  printf("0\n");
}
int main()
{
	char ah[200],ch[200];
	while(gets(ah)!=NULL)
	{
		GOT(ah,ch);
	}
	return 0;
}
*/
#include <stdio.h>
#include <math.h>
int dad(int n,int S[10])
{
	int sum=0,i,k=0;
	for(i=pow(10,9) ;i>=1 ;i=i/10)
	    if(n/i!=0)  break;
	i = i*10;
	while(n>1)
	{
        if((n/i)%2==0)
		{
			S[k] = n/i;
			k++;
		}
		n = n%i;
		i = i/10; 
	}
	return k;	
}
int main()
{
	int S[10];
	int n,i,k;
	int sum=0;
	while(scanf("%d",&n)!=EOF)
	{
		dad(n,S);
		k = dad(n,S);
		if(k==0)  printf("0\n");
		else
		    for(i=0 ;i<k ;i++)
		        sum = sum+S[i]*pow(10,i-1);
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
