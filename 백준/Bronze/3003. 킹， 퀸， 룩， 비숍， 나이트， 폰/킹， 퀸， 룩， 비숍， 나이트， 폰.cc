#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 1 1 2 2 2 8
	int arr[6] = { 1, 1, 2, 2, 2, 8 };
	int cnt;
	for (int i = 0; i < 6; i++) {
		cin >> cnt;
		cout << arr[i] - cnt << ' ';
	}

	return 0;
}