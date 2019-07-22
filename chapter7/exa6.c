#include <stdio.h>

int int_bits(void) {
    int i = 0;
    for (unsigned x = ~0U; x; x >>= 1)
        if (x & 1U) i++;
    return i;
}

void print_bits(unsigned x) {
    for (int i = int_bits() - 1; i >= 0; i--) {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
}
int main(void) {
    unsigned a, b;
    printf("请输入两个非负整数。\n");
    printf("a: "); scanf("%u", &a);
    printf("b: "); scanf("%u", &b);

    printf("\\na = "); print_bits(a);

    return 0;
}