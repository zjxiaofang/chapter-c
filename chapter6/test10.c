#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) {
    int temp, i;
    for (int i = 0; i < n; ++i) {
        v1[i] = v2[n-1-i];
    }
}

void print_array(int v[],int count)
{
    printf("{");
    for (int i = 0; i < count; ++i)
    {
        printf("%d,",v[i]);
    }
    puts("}");
}


int main(void)
{
    int ary2[] = {1, 2, 3, 4, 5};

    int ary1[5];
    printf("%d\n", ary1[0]);

    intary_rcpy(ary1,ary2,5);
    printf("ary1 = "); print_array(ary1, 5);

    return 0;
}