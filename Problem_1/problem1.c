#include <stdio.h>

int divisor(int, int);

int main(void)
{
    // Sum of all multiple of 3 and 5
    // 3(1+2+3+...) + 5(1+2+3+...) - 15(1+2+3+...) = result
    int result = divisor(3, 999) + divisor(5, 999) - divisor(15, 999);
    printf("Answer: %d\n", result);

    return 0;
}

int divisor(int q, int p)
{
    // The Sum of n numbers is
    // n(n+1) / 2
    // where n can be expressed as p/q

    return q * (p / q) * ((p / q) + 1) / 2;
}
