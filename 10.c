#include <stdio.h>
#include <math.h>
// to print all Armstrong numbers under 1000
int main()
{
    int temp, count = 0, r;
    int sum, i;

    for (i = 1; i < 1000; i++)
    {
        temp = i, sum = 0;
        while (temp != 0)
        {

            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }
        if (sum == i)
            printf("%d ", i);
    }

    return 0;
}