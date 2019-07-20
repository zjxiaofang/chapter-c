#include <stdio.h>
int main(void) {
    int i, j;
    int fen[7][2];
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 2; ++j) {
            do {
                printf("分数:");
                scanf("%d", &fen[i][j]);
                if (fen[i][j] > 100 || fen[i][j] < 0)
                    puts("重新输入：");
            } while (fen[i][j] > 100 || fen[i][j] < 0);
        }
    }
    puts("   语文  数学");

    for (int i = 0; i < 6; ++i) {
    	printf("同学%-2d",i+1);
        for (j = 0; j < 2; ++j) {
            printf("%4d", fen[i][j]);
            fen[6][j] +=fen[i][j];
        }
        puts("");
    }
    
    printf("总分  %4d%4d\n",fen[6][0],fen[6][1]);

    return 0;
}