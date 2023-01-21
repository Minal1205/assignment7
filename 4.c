#include <stdio.h>
// HCF of two numbers
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
    printf("HCF of %d and %d is %d", x, y, HCF);

    return 0;
}