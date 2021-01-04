
#include <stdio.h>

int main() {

	int x, y;
	int i;
	int total_day = 0;
	int day;
	int total[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	scanf("%d %d", &x, &y);

	for (i = 1; i < x; i++)
		total_day += total[i-1];

	total_day+= y;

	day = total_day % 7;

	if (day == 1)
		printf("MON\n");
	else if (day == 2)
		printf("TUE\n");
	else if (day == 3)
		printf("WED\n");
	else if (day == 4)
		printf("THU\n");
	else if (day == 5)
		printf("FRI\n");
	else if (day == 6)
		printf("SAT\n");
	else if (day == 0)
		printf("SUN\n");

	return 0;d
}