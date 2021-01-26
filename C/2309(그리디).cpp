#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int sum = 0;
	int key[9];
	for (int i = 0; i < 9; i++) {
		cin >> key[i];
	}

	sort(key, key + 9);

	for (int j = 0; j < 9; j++)
		sum += key[j];


	for (int k = 0; k < 9 ; k++) {
		for (int l = k + 1; l < 9; l++) {
			if (sum - (key[k] + key[l]) == 100) {

				for (int m = 0; m < 9; m++) {
					if (m == k || m == l)
						continue;
					else
						cout << key[m] << endl;

				}
				return 0;
			}
		}
	}

}
