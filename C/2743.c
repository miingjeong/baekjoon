#include <stdio.h>
#include <string.h>
int main() {

	char arr[100] = " ";
	int count = 0;
	int i;
	
	scanf("%s", &arr);
	
	for (i = 0; i < strlen(arr); i++)
		count++;
	printf("%d\n", count);
	return 0;
}