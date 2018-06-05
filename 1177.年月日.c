#include <stdio.h>
int main()
{
	int x,y,z;
	int i,day;
	
	while(scanf("%d-%d-%d",&x,&y,&z)!=EOF)
	{
		day = z;
		for(i=1 ;i<y ;i++)
		{
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                day = day+31;
            if(i==2)
            {
            	if((x%4==0&&x%100!=0)||x%400==0)
		            day = day+29;
		        else
		            day = day+28;
		    }
            if(i==4||i==6||i==9||i==11)
                day = day+30;
        }
        printf("%d\n",day);
	}
	return 0;
 } 
