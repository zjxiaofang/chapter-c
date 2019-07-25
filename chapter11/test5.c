#include <stdio.h>
int str_chnum(const char* s,int c)
{
	int count = 0;int x = 0;
	while (*s){
		if (*s == c)
			count ++;
		s++;

	}
	
	return count;
}
int main(void) {
    char *s ;
    char c = 'a';

   printf("请输入字符串："); scanf("%s", s);
   // printf("请输入目标字符："); scanf(" %c", &c);

    printf("字符串%s中含有%d个%c\n", s, str_chnum(s, c), c);

    return 0;
}


// #include <stdio.h>

// int str_chnum(const char *s, int c) {
//     int count = 0;

//     while (*s) {
//         if (*s == c) {
//             count++;
//         }

//         s++;
//     }

//     return count;
// }

// int main(void) {
//     char *s ;
//     char c;

//     printf("请输入字符串："); scanf("%s", s);
//     printf("请输入目标字符："); scanf(" %c", &c);

//     printf("字符串%s中含有%d个%c\n", s, str_chnum(s, c), c);

//     return 0;
