#include <stdio.h>

int main(void) {
    int i, j;
    int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};
    int tensu[4][2][3];

    for (i = 0; i < 4; i++) {
        printf("{{");
        
        for (j = 0; j < 2; j++)
            printf("%4d,", tensu1[i][j]);
        printf("%4d", tensu1[i][2]);
        printf("} {");

        for (j = 0; j < 2; j++)
            printf("%4d,", tensu2[i][j]);
        printf("%4d", tensu2[i][2]);
        printf("}}  ");
    }

    return 0;
}