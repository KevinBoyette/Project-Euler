#include <stdio.h>

// Number Theory is awesome.

void fibber();

int main(void)
{
    fibber();
    return 0;
}

void fibber()
{
    // If you look carefully every 3rd term
    // is even.
    // ie. 1 1 (2) 3 5 (8) 13 21 (34)
    // Using this we can speed up the calculation.

    long sequence[] = { 2, 0 };
    unsigned int i = 0;
    long sum = 0;

    while (sequence[i] < 4000000) {
        sum += sequence[i];
        i = (i + 1) % 2;
        sequence[i] = 4 * sequence[(i + 1) % 2] + sequence[i];
    }
    printf("Sum: %ld\n", sum);
}
