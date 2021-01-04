#include <stdio.h>

int main() {

	int T;
	int room; 

	scanf("%d", &T);

	while (T > 0) {

		scanf("%d", &room);

		if (5 <= room && room < 9)
			printf("2\n");

		else if (9 <= room && room < 16)
			printf("3\n");

		else if (16 <= room && room < 25)
			printf("4\n");

		else if (25 <= room && room < 36)
			printf("5\n");

		else if (36 <= room && room < 49)
			printf("6\n");

		else if (49 <= room && room < 64)
			printf("7\n");

		else if (64 <= room && room < 81)
			printf("8\n");

		else if (81 <= room && room < 100)
			printf("9\n");

		else  
			printf("10\n");


		T--;
	}
	return 0;
}