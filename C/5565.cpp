#include <bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int arr[9];
int sum = 0;
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	cout << n-sum;



}
