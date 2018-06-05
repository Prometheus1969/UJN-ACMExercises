#include <stdio.h>
int main()
{
    int a,b,c;
	double s;
	while(scanf("%d %d %d",&a,&b,&c))
	{
	    if(a==0&&b==0&&c==0)  break;
		s = (double)a/b;
        printf("%.*lf\n",c,s);	
	}
	return 0;	
} 
