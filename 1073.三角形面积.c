#include <stdio.h>
#include <math.h>
int main()
{
	double x,y,z;
	double S,a;
	while(scanf("%lf %lf %lf",&x,&y,&z))
	{
		if(x==0&&y==0&&z==0)  break;
		if(x+y<=z||x+z<=y||z+y<=x||x==0||y==0||z==0)  printf("NO\n");
	    else
		{
		    a = (x+y+z)/2.0;
			S = pow(a*(a-x)*(a-y)*(a-z),0.5);
			printf("%.2lf\n",S);	
		}	
	}
	return 0;
 } 
