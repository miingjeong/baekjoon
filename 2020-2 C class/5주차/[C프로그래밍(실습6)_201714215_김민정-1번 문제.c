//201714215 �����
#include <stdio.h>
int main(void)
{
	int a, b;
	int c;

	printf("�� ���� ���ʴ�� �Է��Ͻÿ�.: ");
	scanf_s("%d %d", &a, &b);

	c = b % a;
	if (c == 0)
		printf("B�� A�� %d��� �Դϴ�.", b/a);
	else
		printf("B�� A�� ����� �ƴմϴ�");

	return 0;


}