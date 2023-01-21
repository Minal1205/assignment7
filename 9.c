#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, count = 0, r;
    int sum = 0;

    printf("Enter Number\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    while (num>0)
    {
        r = num % 10;
        sum += pow(r, count);
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("%d is ARMSTRONG number", temp);
    }
    else
        printf("%d is not ARMSTRONG number", temp);

    return 0;
}