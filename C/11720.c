#include <stdio.h> 


int main() {

	int N;
	char str[100];
	int sum = 0;

	scanf("%d", &N);
	scanf("%s", &str);

	for (int i = 0; i < N; i++) {
		sum += str[i] - '0';
	}
	printf("%d", sum);
	return 0;

}