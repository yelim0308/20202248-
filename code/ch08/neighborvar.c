#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("������   ���尪     �ּҰ�  \n");
	printf("--------------------------------\n");
	printf("   c       %d       %p\n", c, &c);
	printf("   c       %d       %p\n", b, &b);
	printf("   c       %d       %p\n", a, &a);

	int* p = &c;
	printf("   c       %d       %p\n", *p, p);
	printf("   c       %d       %p\n", *(p + 3), p+3);
	printf("   c       %d       %p\n", *(p + 6), p+6);

	return 0;
}