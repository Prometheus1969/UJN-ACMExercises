#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,m,t,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        m=a;   
        t=b;  
        while(b!=0)    
        { 
            c=a%b; 
            a=b; 
            b=c;
        } 
        printf("%d\n",m*t/a);  
    }
        return 0;
}
