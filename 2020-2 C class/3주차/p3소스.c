#include <stdio.h>
int main(void)
{
	double x;
	double sum;

	printf("실수를 입력하시오:");
	scanf_s("%lf", &x);
	sum = 3 * (x * x) + 7 * x + 11;
	printf("다향식의 값은:%lf\n", sum);

	return 0;
}