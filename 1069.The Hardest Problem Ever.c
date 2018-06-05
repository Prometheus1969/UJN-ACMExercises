#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    int k;  
    char str[11], s[500], c;  
    char a[] = {'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U' };  
    while(scanf("%s%*c", str) && strlen(str) < 6)  
    {  
        if(str[0] == 'S')  
        {  
            k = 0;  
            while(c = getchar())  
            {  
                if(c >= 'A' && c <= 'Z')  s[k++] = a[c - 'A'];  
                else if(c == '\n')  
                {  
                    break;  
                }  
                else  s[k++] = c;  
            }  
        }  
        else  
        {  
            s[k] = '\0';  
            puts(s);  
        }  
    }  
    return 0;  
}  
