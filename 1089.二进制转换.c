#include <stdio.h>
int main()
{
	int x,i=0,n=0;
	int S[20];
	while(scanf("%d",&x))
	{
		if(x==0)  break;
	    do{
		        S[i] = x%2;
			    x = x/2;
			    n++; 
			    i++; 
	    }while(x>0); 
	    for(i=n-1 ;i>=0 ;i--)  printf("%d",S[i]);
	    printf("\n");
	    i = 0;
	    n = 0;
	}
	return 0;  
}
