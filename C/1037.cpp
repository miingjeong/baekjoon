#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;

vector<int>arr;
int main() {
	int sum = 1;
	int r;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> r;
		arr.push_back(r);
	}

	sort(arr.begin(), arr.end());

	cout << arr[0] * arr[n-1];
	return 0;

}