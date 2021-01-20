#include <iostream>
#include <queue>
using namespace std;

int main() {

	queue<int>qu;
	int N, K;

	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		qu.push(i);

	cout << "<";
	while (!qu.empty()) {

		for (int j = 0; j < K - 1; j++) {
			qu.push(qu.front());
			qu.pop();
		}
		cout << qu.front();
		qu.pop();
		//참고한 부분. 아직 비어있지 않으면 쉼표와 뛰어쓰기.. 마지막은 적용 안하기위해
		if (!qu.empty())
			cout << ", ";
	}
	cout << ">";
	return 0;
}