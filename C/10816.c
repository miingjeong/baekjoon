#include <stdio.h>

int arr[20000001] = { 0, };  //-10000000 ~ 10000000

int main() {
	int n, m, i, t;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		arr[t + 10000001]++;
	}
	scanf("%d", &m);
	for (i = 0; i < m; i++) {
		scanf("%d", &t);
		printf("%d ", arr[t + 10000001]);
	}
	return 0;
}