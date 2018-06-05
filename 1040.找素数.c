#include <stdio.h>
int main()
{
	int i,n,m,t,flag=1;
	scanf("%d %d",&m,&n);
	for(t=m ;t<=n ;t++)
	{
		for(i=2 ;i<t ;i++)
	    if(t%i==0)
	    {
	    	flag = 0;
	    	break;
		}
	    if(flag!=0)
	        printf("%d ",t);
    	flag = 1;
	}
    return 0;
}
