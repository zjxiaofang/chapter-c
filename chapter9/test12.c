#include <stdio.h>

void rev_string(char s[][128], int n) {
    int i, j = 0;
    printf("%d\n", n);
    int x[3] = {0};
    for (int i = 0; i < n; ++i) {
        j = 0;
        while (s[i][j]) {
            x[i]++;
            j++;
        }
    }

    for (i = 0; i < n; ++i) {
        for (j = 0; j < x[i] / 2; j++) {
            char temp = s[i][j];
            s[i][j] = s[i][x[i] - 1 - j];
            s[i][x[i] - 1 - j] = temp;
        }
        printf("%s\n", s[i]);
    }

}

int main(void) {
    char str[][128] = {"turbo", "na", "doch"} ;
    int n = 3;
    rev_string(str, 3);

    return 0;
}


