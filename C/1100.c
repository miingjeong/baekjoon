
int main() {
	char arr[8][8];
	int i, j;
	int count = 0;

	for (i = 0; i < 8; i++)
		gets(arr[i]);

	for (i = 0; i < 8; i += 2) {
		for (j = 0; j < 8; j += 2) {
			if (arr[i][j] == 'F')
				count++;
		}
	}

	for (i = 1; i < 8; i += 2) {
		for (j = 1; j < 8; j += 2) {
			if (arr[i][j] == 'F')
				count++;
		}
	}
	printf("%d\n", count);
	return 0;


}