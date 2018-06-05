#include <stdio.h>
int main()
{
	int x,i=0,n=0,m;
	int S[300];
	char ch; 
	while(scanf("%d %d",&x,&m)!=EOF)
	{
	    do{
		        S[i] = x%m;
			    x = x/m;
			    n++; 
			    i++; 
    	}while(x>0); 
	    for(i=i-1 ;i>=0 ;i--)
	    {  
	        if(S[i]>=10)
		    {
			    n = S[i]-10;       
			    ch = 65+n;           
		        printf("%c",ch);
		    }   
	    	if(S[i]<10)  printf("%d",S[i]);
	    }
	    printf("\n");
	    i = 0;
	    n = 0;
	}
	return 0;  
}
