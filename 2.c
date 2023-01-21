#include <stdio.h>
//printing n terms of  fibonacci series
int main()
{
    int num,x,a = 0, b = 1, c = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("Enter Number to check it is in series or not\n");
    scanf("%d",&x);
    printf("0 ");
    for (int i = 2; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
    return 0;
}