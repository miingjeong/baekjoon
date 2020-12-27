#include <stdio.h> 

int fac(int n) {

	if (n == 0) return 1;
	else
		return n * fac(n - 1);

}

int main() {

	int n, ans;
	scanf("%d", &n);
	ans = fac(n);
	printf("%d\n", ans);

	return 0;


}