#include <stdio.h>
int main()
{
	int x,y,z;
	while(1)
	{
		scanf("%d %d %d",&x,&y,&z);
		if(x==0&&y==0&&z==0)  break;
		if(x+y<=z||x+z<=y||y+z<=x||x==0||y==0||z==0)
		    printf("not a triangle\n");
		else
		    {
		    	if(x*x+y*y==z*z||x*x+z*z==y*y||z*z+y*y==x*x)
		    	    printf("yes\n");
		    	else
		    	    printf("no\n");
			}
	}
	return 0;
 } 
