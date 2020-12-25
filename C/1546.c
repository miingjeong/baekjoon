#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <stdio.h>
int main(){

	int num;
	int score[1000];
	double change[1000];
	int i;
	double max = 0;
	double sum = 0;
	double avg;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		
		scanf("%d", &score[i]);
	}

	for (i = 0; i < num; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	

	for (i = 0; i < num; i++) {
		change[i] = ((score[i] / max) * 100);
	}

	for (i = 0; i < num; i++) {
		
		sum += change[i];
	}

	avg = sum / num;

	printf("%lf", avg);


}