#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x%3==0&&x%5==0&&x%7==0)
	    printf("Yes");
	else
	    printf("No");
	return 0;
}
