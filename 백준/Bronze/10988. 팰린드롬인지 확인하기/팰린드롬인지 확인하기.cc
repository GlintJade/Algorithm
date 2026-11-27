#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string word;
	cin >> word;

	int l = 0, r = word.length() - 1;
	int answer = 1;
	while (l < r) {
		if (word[l] != word[r]) {
			answer = 0; break;
		}
		l++; r--;
	}
	cout << answer;

	return 0;
}