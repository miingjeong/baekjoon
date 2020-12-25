#include <stdio.h>

int main() {

	int b=0, h;
	double m;

	printf("삼각형의 밑변: ");
	scanf_s("%d", &b);
	printf("삼각형의 높이: ");
	scanf_s("%d", &h);
	m = b * h / 2;

	printf("삼각형의 넓이: %lf", m);
	
}