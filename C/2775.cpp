#include cstdio
using namespace std;

int T, k, n, dp[15][15];

int main() {
	scanf(%d, &T);

	for (int i = 1; i  15; i++)
		dp[0][i] = i;

	for (int i = 1; i  15; i++) {
		for (int j = 1; j  15; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	while (T--) {
		scanf(%dn%d, &k, &n);
		printf(%dn, dp[k][n]);

	}
	return 0;

}