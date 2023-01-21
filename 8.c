#include <stdio.h>
// to print all Prime numbers between two numbers
int main()
{
    int i, num, flag, a, b;
    printf("Enter a number\n");
    scanf("%d",&a);
    for (num = a; num >0; num++)
    {
        flag = 0;

        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
                flag = 1;
        }
        if (flag == 0 && num != 1)
            printf("%d ", num);
            break;
    }

    return 0;
}