#include <stdio.h>
#define n 3
#define b 128
void put_strary(const char s[][b], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);
}

int main(void)
{
    char cs[][b] = {"Turbo", "NA", "DOHC"};
    put_strary(cs, n);

    return 0;
}