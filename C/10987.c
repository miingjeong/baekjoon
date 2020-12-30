#include <stdio.h> 
#include <string.h>

int main() {

	int i;
	int count = 0;
	char s[100];

	scanf("%s", s);

	for (i = 0; i < strlen(s); i++) {
		if (s[i] == 'a'|| s[i] == 'e'|| s[i] == 'o'|| s[i] == 'i'|| s[i] == 'u') {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}