#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, y;
	cin >> n;

	bool paper[105][105] = {false};
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				paper[j][k] = true;
			}
		}
	}

	int answer = 0;
	for (int j = 1; j <= 100; j++) {
		for (int k = 1; k <= 100; k++) {
			if (paper[j][k] == true) answer++;
		}
	}

	cout << answer;

	return 0;
}