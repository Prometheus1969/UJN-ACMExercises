#include <stdio.h>
int main()
{
    int x,y,sum,T;
    while(1)
    {
	    scanf("%d %d",&x,&y);
	    if(x==0&&y==0)  break;
    	sum = x+y;
    	printf("%d\n",sum);
	}
	return 0;
} 
