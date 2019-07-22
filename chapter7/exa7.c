#include <stdio.h>

int int_bits(void) {
    int bits = 0;
    for ( unsigned x = ~0U; x > 0; x >>= 1)
        bits++;
    return bits;
}

void print_bits(unsigned x) {
    for (int i = int_bits() -1; i >= 0; --i)
        putchar(((x>>i)&1U) ?'1':'0' );
}

int main(void) {
    unsigned x, n;
    printf("非负整数："); scanf("%u", &x);
    printf("位移位数："); scanf("%u", &n);

    printf("\n整数      = "); print_bits(x);
    printf("\n左移后的值 = "); print_bits(x << n);
    printf("\n右移后的值 = "); print_bits(x >> n);
    putchar('\n');

    return 0;
}