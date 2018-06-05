#include<stdio.h>
int temp(int a[],int n);
int main()
{
   int a[200];
   int i,j,t;
   int m,c,n;
   scanf("%d",&m);
   for(t=0;t<m;t++)
   {
   	 	scanf("%d",&n);
   		for(i=0;i<n;i++)
   			scanf("%d",&a[i]); 
	   c=temp(a,n);
	   printf("%d\n",c);
	}	
}
int temp(int a[],int n)
{
	int c=0;
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[k])
				k=j;
		}
		if(k!=i)
		{
				t=a[k];
				a[k]=a[i];
				a[i]=t;
				c++;
		}
	}
	return c;
}
