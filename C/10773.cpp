#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

	stack<int>st;

	int K;
	cin >> K;
	int n;
	int sum = 0;

	for (int i = 0; i < K; i++) {
		cin >> n;

		if (n == 0)
			st.pop();
		else
			st.push(n);
	}

	/*참고한 부분
	남은 스택의 합을 어떻게 구하나 했더니... 
	스택이 비어있지 않을 때 까지
	맨 위를 더하고 팝
	맨위를 더하고 팝...
	맨 위를 더하고 팝...
	.*/
	for (int j = 0; !st.empty(); j++) {
		sum += st.top();
		st.pop();
	}
	cout << sum << endl;


	return 0;



}