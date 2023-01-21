#include <stdio.h>
// to find the position of first one from LSB

int main()
{
    int n, count = 0;
    printf("Enter Number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        count++;
        if (n & 1 == 1)
            break;
        else
            n = n >> 1;
    }
    printf("Position of first 1 from LSB is %d", count);
    return 0;
}