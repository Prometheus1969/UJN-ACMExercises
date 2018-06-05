#include <stdio.h>
   
#define M 100
#define N 100
   
int main(void) {
    int i,j,m,n,ii;
    int max,jmax,flag,f = 1;
    int a[M][N];
    while(scanf("%d",&n) != EOF)
	{
        for(i = 0; i < n; ++i)
            for(j = 0; j < n; ++j)
                scanf("%d",&a[i][j]);
        for(i=0 ;i<n ;i++)
		{
            max = a[i][0];
            jmax = 0;
            for(j=1 ;j<n ;++j) 
			{                                 // 找出i行最大的
                if(max<a[i][j])
				{
                    max = a[i][j];
                    jmax = j;                 // 且记录所在的列坐标
                }
            }
            flag = 1;                         // 预置标志
            for(ii = 0; ii < n && flag; ++ii) 
			{                                 // 判断max是否为所在列最小的
                if(a[ii][jmax] < max)         // 不是
                    flag = 0;                 // 则清标志
            }
            if(flag == 1)
			{
                printf("%d\n",a[i][jmax]);
                f = 0;
            }
        }
        if(f) printf("No\n");
    }
    return 0;
}
