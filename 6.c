#include <stdio.h>
// to print all Prime numbers under 100
int main()
{
    int i, num,flag;
    for (num = 1; num <= 100; num++)
    {flag=0;
        
        for (i = 2; i <= num/2; i++)
        {
            if (num%i== 0)
                flag=1;
                
        } 
        if(flag==0&&num!=1)
        printf("%d ",num);

    }

    return 0;
}