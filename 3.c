#include <stdio.h>
// to check whether a given number is there in the Fibonacci series or not
int main()
{
    int num, x, a = 0, b = 1, c = 0, flag = 0;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("Enter Number to check it is in series or not\n");
    scanf("%d", &x);

    for (int i = 2; i <= num; i++)
    {
        c = a + b;
        if (x == c)
            flag = 1;

        a = b;
        b = c;
        printf("%d ", c);
    }
    printf("\n");
    if (flag == 1)
        printf("%d is present\n",x);
    else
        printf("%d is not present\n",x);

    return 0;
}