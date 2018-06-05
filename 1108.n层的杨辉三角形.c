#include<stdio.h>
int main()
{
    int i,j,n;
    while(scanf("%d",&n)!=EOF)
	{
        int a[30][30];
        for(j=0;j<n;j++)
		{
            for(i=0;i<=j;i++)
			{
                if(i==0||i==j)  a[j][i]=1;
                else   a[j][i]=a[j-1][i-1]+a[j-1][i];
                if(i==0)  printf("%d",a[j][i]);
                else  printf("% d",a[j][i]);
            }
         printf("\n");
        }
    }
    return 0;
}
