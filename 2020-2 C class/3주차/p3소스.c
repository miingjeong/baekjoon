#include <stdio.h>
int main(void)
{
	double x;
	double sum;

	printf("�Ǽ��� �Է��Ͻÿ�:");
	scanf_s("%lf", &x);
	sum = 3 * (x * x) + 7 * x + 11;
	printf("������� ����:%lf\n", sum);

	return 0;
}