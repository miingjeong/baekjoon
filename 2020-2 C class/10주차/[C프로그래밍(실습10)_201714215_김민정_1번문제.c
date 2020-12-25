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

	printf("금액을 입력하세요(원): ");
	scanf_s("%lf", &money);
	printf("기한을 설정하시오: ");
	scanf_s("%d", &year);
	printf("\n\n");
	printf("**** 결과 ****\n");

	printf("%lf원을 %d년 동안 예금할 경우 %lf원이 됩니다.", money, year, comInterest(year, money));
	return 0;

}


