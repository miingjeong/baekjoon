#include <stdio.h> 

int main() {

	int A, B, C, D, E;
	int sum = 0;
	
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

	sum = A*A+ B*B + C*C + D*D + E*E;
	
	printf("%d\n", sum %10);
	return 0;

}