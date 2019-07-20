#include <stdio.h>

void ho(int *height){
	if (*height < 180)
		*height = 180;
}

int main(void)
{
	int sato = 178;/*佐藤的身高*/
    int sanaka = 175;/*佐中的身高*/
    int masaki = 179;/*真崎的身高*/
	int *p;
	p = &sato;
    ho(&masaki);

    printf("佐藤的身高%d\n", sato);
	printf("%d\n",*p);
	printf("佐藤的身高%d\n", sato);
    printf("佐中的身高%d\n", sanaka);
    printf("真崎的身高%d\n", masaki);
	return 0;
}