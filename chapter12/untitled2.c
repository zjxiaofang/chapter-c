#include <stdio.h>

struct xyz {
    char x[10];
    long y;
    double z;
};

struct xyz xyz_of(char x[], long y, double z)
{
    struct xyz temp;

    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

int main(void)
{
    struct xyz s = {"91", 0, 0};

    s = xyz_of("23", 7654321, 35.689);

    printf("xyz.x = %f\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);

    return 0;
}
