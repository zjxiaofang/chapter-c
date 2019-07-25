#include <stdio.h>

// void del_digit(char s[]) {
//     int i = 0; int j = 0;
//     for (; s[i]; i++) {
//         if (s[i] < '0' || s[i] >'9')  {
//         	s[j] = s[i];
//         	j++;
//     	}
//     }//s[j] = '\0';
// }

char x[128];

char * del_digit(char s[]) {
    int i = 0; int j = 0;
    //char x[128];
    for (; s[i]; i++) {
        if (s[i] < '0' || s[i] >'9')  {
        	x[j] = s[i];
        	j++;
    	}
    }//s[j] = '\0';

    return x;
}




int main(void) {
	char str[128];printf("输入一个字符串");scanf("%s",str);
	
	printf("%s\n",del_digit(str));
    return 0;
}