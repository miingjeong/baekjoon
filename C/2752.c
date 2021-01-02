#include <stdio.h>

int main(void) {
	
	int num[3];
	int i,j;
	int tmp = 0;
	int min = 1000001, max = 0;

	for (i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2 ; j++) {
			if (num[j] > num[j + 1]) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;


			}
		}
	}

	

	for (i = 0; i < 3; i++)
		printf("%d ", num[i]);

	return 0;


}