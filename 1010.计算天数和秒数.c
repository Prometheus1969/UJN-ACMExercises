#include <stdio.h>
int main()
{
	int S,d,h,m,s;
	scanf("%d",&S);
	d = S/86400;
	h = (S%86400)/3600;
	m = (S%3600)/60;
	s = S%60;
	printf("%02d %02d:%02d:%02d",d,h,m,s);
	return 0;
} 
