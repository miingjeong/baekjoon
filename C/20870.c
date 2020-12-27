#include <stdio.h> 

int fibo(int n) {

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n<=90)
		return fibo(n - 1) + fibo(n - 2);

}

int main() {

	int N;
	int ans;
	scanf("%d", &N);

	ans=fibo(N);
	printf("%d\n", ans);
	return 0;

}