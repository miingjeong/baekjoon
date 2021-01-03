#include <stdio.h>

int main() {

	int i;
	int score[4] = { 0 };
	int a;
	int k = 3;
	int front = 0, back = 0;

	while (k > 0) {

		front = 0, back = 0;

		for (i = 0; i < 4; i++) {
			scanf("%d", &score[i]);

		
			if (score[i] == 0)
				front++;
			else
				back++;
		}

		if (front == 1 && back == 3)
			printf("A\n");
		else if (front == 2 && back == 2)
			printf("B\n");
		else if (front == 3 && back == 1)
			printf("C\n");
		else if (front == 4 && back == 0)
			printf("D\n");
		else if (front == 0 && back == 4)
			printf("E\n");

		k--;
	}
	


	return 0;
}