#include <stdio.h>

int int_bits(void)
{
    int i = 0;
    for (unsigned x = ~0; x; x>>=1)
    {
        i++;
    }
    return i;
}

void print_nbits(unsigned x)
{
    for (int i = int_bits() -1; i >= 0; i--)
        putchar(((x >> i) & 1U) ? '1' : '0');
}

int main(void)
{
    unsigned i;

    for (i = 0; i < 65U; i++) {
        printf("%5u  ", i);
        print_nbits(i);
        printf("  %06o  %04X\n", i, i);
    }

    return 0;
}