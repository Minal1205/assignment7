#include <stdio.h>
// to print all Prime numbers between two numbers
int main()
{
    int i, num, flag, a, b;
    printf("Enter Two numbers\n");
    scanf("%d %d", &a, &b);
    for (num = a; num <= b; num++)
    {
        flag = 0;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                flag = 1;
        }
        if (flag == 0 && num != 1)
            printf("%d ", num);
    }

    return 0;
}