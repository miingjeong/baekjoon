#include<iostream>
using namespace std;

int N, M, ans;
int tree[1000001];
int  maxi = 0;
long long mid, high, low;

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> tree[i];
		if (maxi < tree[i]) maxi = tree[i];
	}
	low = 0;
	high = maxi;
	ans = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;
		long long cnt = 0;
		for (int i = 0; i < N; i++)
			if (tree[i] >= mid) cnt += tree[i] - mid;
		if (cnt >= M) {
			low = mid + 1;
			if (ans < mid) ans = mid;
		}
		else {// (cnt < N)		
			high = mid - 1;
		}
	}

	cout << ans;
}S