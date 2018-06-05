#include <stdio.h>
int main()
{
	int T,x,y;
	float g;
	char ch;
	scanf("%d",&T);
	while(T--)
	{
		getchar();
		scanf("%c %d %d",&ch,&x,&y);
		switch (ch)
		{
			case '+':
				g = x+y;
				printf("%.0f\n",g);
				break;
			case '-':
				g = x-y;
				printf("%.0f\n",g);
				break;
			case '*':
				g = x*y;
				printf("%.0f\n",g);
				break;
			case '/':
				g = (float)x/y;
				printf("%.2f\n",g);
			
		}
	}
}
