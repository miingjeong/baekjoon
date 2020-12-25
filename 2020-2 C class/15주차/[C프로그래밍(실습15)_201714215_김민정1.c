#include  <stdio.h>
#define SIZE 50
#define IS_SPACE(c) { int i; int count=0; for(i=0; i<SIZE; i++) {if((c[i]==' ')||(c[i]=='\t')||(c[i]=='\n')){count++;}}\
					printf("Number of spaces: %d\n", count);}

int main()
{
	char c[SIZE];
	printf("Input a string:" );
	gets(c);
	IS_SPACE(c);
	return 0;
}