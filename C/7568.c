#include <stdio.h>

int main() {
	int N;
	int i,j;
	int weight[50];
	int height[50];
	int num[50] = { 0 };

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &weight[i], &height[i]);
	}



	for (i = 0; i < N; i++)
		num[i] = 1;

	for (i = 0; i < N ; i++) {
		for (j = 0; j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j])
				num[i] = num[i] + 1;
		}

	}

	for (i = 0; i < N; i++)
		printf("%d ", num[i]);

	return 0;


}