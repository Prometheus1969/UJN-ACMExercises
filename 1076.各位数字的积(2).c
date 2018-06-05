#include <stdio.h>
#include <math.h>
int main()
{
	int n,ji=1,i,term,T;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&n);
	    for(i=pow(10,9) ;i>=1 ;i=i/10 ) 
	    {
		    if(n/i!=0)               
		        break;
        }
            while(i>=1)               
            {
			    term = n/i;             
			    ji = ji*term;          
			    n = n-term*i;           
			    i = i/10;             
		    }
	    printf("%d\n",ji);
	    ji = 1;
	}
	return 0;
 } 
