#include <stdio.h>
// printing nth term of fibonacci series
int main()
{
    int num, a = 0, b = 1, c = 0;
    printf("Enter Number\n");
    scanf("%d", &num);

    for (int i = 3; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%dth term of series is %d ",num, c);
    return 0;
}