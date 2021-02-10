#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, a, d;

	scanf("%d/%d/%d", &k, &d, &a);

	
	if (k + a < d || d == 0)
		printf("hasu\n");
	else
		printf("gosu\n");
	return 0;


}