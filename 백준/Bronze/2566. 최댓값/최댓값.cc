#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num, maxx = 0;
	int row = 1, col = 1;
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cin >> num;
			if (maxx < num) {
				maxx = num;
				row = i;
				col = j;
			}
		}
	}

	cout << maxx << '\n' << row << ' ' << col;

	
	return 0;
}