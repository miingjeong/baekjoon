#include <stdio.h>
int main() {

	int n;
	int result;
	int count = 0;


	scanf("%d", &n);
	result = n;

	while (1) {
		n = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		count++;

		if (result == n) break;
	}
	printf("%d\n", count);
	return 0;
}