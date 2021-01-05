#include <stdio.h>

int main() {

	char c[10000]='';


	for (i = 0; i < 1000000; i++) {
		scanf("%s", &c[i]);
	}


	for (i = 0; i < 1000000; i++) {
		printf("%c ", c[i);
	}

	return 0;

}