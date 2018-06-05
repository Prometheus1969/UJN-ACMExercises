#include <stdio.h>
int main()
{
	double e;
	int i=1;
	double sum=1,term;
	while(scanf("%lf",&e)!=EOF)
	{
	    do{
		    term = term*(i/(2.0*i+1));
		    sum = sum+term;
		    i++;
	    }while(term>=e);
	    printf("%.6lf\n",sum);
	    sum = 0;
	}	
	return 0;   
}
