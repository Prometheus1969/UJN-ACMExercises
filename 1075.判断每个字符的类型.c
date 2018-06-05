#include <stdio.h>
int main()
{
	char x;
	while(scanf("%c",&x)!=EOF)
	{
		getchar();
	    if((x>=65&&x<=90)||(x>=97&&x<=122))
	        printf("alpha\n");
        else if (x>=48&&x<=57)
            printf("numeric\n");
	    else
            printf("other\n");
    }
    return 0;
 } 
