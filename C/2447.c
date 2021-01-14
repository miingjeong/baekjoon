#include <stdio.h>

char mat[2201][2201];
void solved(int y, int x, int num) {

	if (num == 1) {
		mat[y][x] = '*';
		return;
	}

	int div = num / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1)
				;
			else
				solved(y + (i * div), x + (j * div), div);
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);

	memset(mat, ' ', sizeof(mat));
	solved(0, 0, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%c", mat[i][j]);
		printf("\n");
	}
}
