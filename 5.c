#include <stdio.h>
// to check whether two given numbers are co-prime numbers or not
int main()
{
    int x, y, LCM;
    printf("Enter Two Numbers\n");
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            LCM = i;
            break;
        }
    }
    int HCF = (x * y) / LCM;
    if (HCF == 1)
        printf("%d and %d are co-prime\n", x, y);
    else
        printf("%d and %d are not co-prime\n", x, y);

    return 0;
}