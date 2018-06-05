#include <stdio.h>
int main()
{
	int a,b,c,i,t=0;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		for(i=10 ;i<=100 ;i++)
		    if(i%3==a&&i%5==b&&i%7==c)
		    {
		    	printf("%d\n",i);
		    	t = 1;
		    	break;
			}
		if(t==0)  printf("No answer\n");
		t = 0;
	}
	return 0;
} 
