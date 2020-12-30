#include <stdio.h>

#define pi 3.141592

int main() {

	double d1, d2;
	double area;
	scanf("%lf", &d1);
	scanf("%lf", &d2);

	area = (2 * d1) + (2 * d2 * pi);

	printf("%.6lf\n", area);

	return 0;
}