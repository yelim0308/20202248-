#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void)
{
	int guess, input;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�.\n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");

	while (scanf("%d", &input)) {
		if (input > guess)
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
		else if (input < guess)
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
		else
		{
			puts("�����Դϴ�.");
			while (scanf("%d", &input))
				break;
		}
	}
	
	return 0;
}