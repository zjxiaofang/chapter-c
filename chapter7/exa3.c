#include <stdio.h>

int main(void)
{
    printf("sizeof(char)  = %lu\n", sizeof(char));
    printf("sizeof(short) = %u\n", (unsigned)sizeof(unsigned short));
    printf("sizeof(int)   = %u\n", (unsigned)sizeof(int));
    printf("sizeof(long)  = %u\n", (unsigned)sizeof(long));
    int a =(unsigned)sizeof(char);
    printf("%u\n",a );

    return 0;
}