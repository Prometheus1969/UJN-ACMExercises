#include <stdio.h>
int main()
{
	int a,b;
	int c,d;
	float f;
	scanf("%d %d",&a,&b);
	c = a/b;
	d = a%b;
	f = (float)a/b;
	printf("%d %d %.2f",c,d,f);
	return 0;
}
