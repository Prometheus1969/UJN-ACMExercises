#include <stdio.h>
int main()
{
	int x,y,z;
	
	for(x=0 ;x<=9 ;x++)
	    for(y=0 ;y<=12 ;y++)
	        for(z=0 ;z<=72 ;z++)
	            if(4*x+3*y+z/2.0==36&&x+y+z==36)
	                printf("%d %d %d\n",x,y,z);
	return 0;
}
