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
			{                                 // �ҳ�i������
                if(max<a[i][j])
				{
                    max = a[i][j];
                    jmax = j;                 // �Ҽ�¼���ڵ�������
                }
            }
            flag = 1;                         // Ԥ�ñ�־
            for(ii = 0; ii < n && flag; ++ii) 
			{                                 // �ж�max�Ƿ�Ϊ��������С��
                if(a[ii][jmax] < max)         // ����
                    flag = 0;                 // �����־
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
