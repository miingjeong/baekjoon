#include <stdio.h> 

int main() {

	int C, N, i, j;
	int mean, num;
	int score[1001] = { 0 };
	float rate;

	scanf("%d", &C);

	for (i = 0; i < C; i++) {
		mean = 0, num = 0;
		scanf("%d", &N);

		for (j = 0; j < N; j++) {
			scanf("%d", &score[j]);
			mean += score[j];
		}
		mean /= N;

		for (j = 0; j < N; j++) {
			if (score[j] > mean)
				num++;
		}
		rate = (float)num / N * 100;
		printf("%.3f%%", rate);

	}
	return 0;


}