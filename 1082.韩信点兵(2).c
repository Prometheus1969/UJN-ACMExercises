#include <stdio.h>
int main()
{
	int m,n,i,s,t=0;
	scanf("%d %d",&m,&n);
	for(i=1500-n ;i<=1500-m ;i++)
	{
		if(i%3==2&&i%5==4&&i%7==6)
		{
		    printf("%d\n",i);
		    t++;
		}
	}
	if(t==0)  printf("No answer");
	return 0;
} 
