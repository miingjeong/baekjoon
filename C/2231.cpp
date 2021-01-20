#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int num = 0;
	int size, sum;

	for (int i = 0; i < N; i++) {
		sum = i;
		size = i;


		while (size) {
			sum = sum + (size % 10);
			size = size / 10;
		}

		if (sum == N) {
			cout << i;
			return 0;
		}
	}
	cout << "0" << endl;
	return 0;



}