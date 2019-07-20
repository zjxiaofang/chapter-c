#include <stdio.h>
int main(void)
{
	float fa =34.5,fb = 11.4;
	char ca = 'A',cb = 'b';
	float *pf = &fa;
	char *pc = $ca;

	printf("%.1f\n",*pf);
	printf("%c\n",*pc);

	pf = &fb;pc = &cb;

	printf("%f\n",*pf);

	*pf = fa;*pc = ca;
	printf("fa:%f fb:%f\n",fa,fb);
	printf("ca:%f cb:%f\n",ca,cb);

	return 0;
}