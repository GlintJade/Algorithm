#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 1 1 2 2 2 8
	int arr[6] = { 1, 1, 2, 2, 2, 8 };
	vector<int> answer;
	int cnt;
	for (int i = 0; i < 6; i++) {
		cin >> cnt;
		if (cnt == arr[i]) answer.push_back(0);
		else if (cnt > arr[i]) answer.push_back(-(cnt - arr[i]));
		else answer.push_back(arr[i] - cnt);
	}

	for (int i = 0; i < answer.size(); i++)cout << answer[i] << ' ';

	return 0;
}