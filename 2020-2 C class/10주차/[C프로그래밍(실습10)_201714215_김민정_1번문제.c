#include <stdio.h>
#include <math.h>

double comInterest(int year, double money) {
	int i;
	double sum = 0;
	for (i = 0; i < year; i++) {
		sum = money * pow(1 + 0.02, year);

	}
	return sum;



}

int main() {

	double money;
	int year;

	printf("�ݾ��� �Է��ϼ���(��): ");
	scanf_s("%lf", &money);
	printf("������ �����Ͻÿ�: ");
	scanf_s("%d", &year);
	printf("\n\n");
	printf("**** ��� ****\n");

	printf("%lf���� %d�� ���� ������ ��� %lf���� �˴ϴ�.", money, year, comInterest(year, money));
	return 0;

}


