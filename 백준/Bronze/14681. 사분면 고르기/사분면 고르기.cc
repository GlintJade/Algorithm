#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	cin >> x >> y;
	int answer;
	if (x > 0 && y > 0) answer = 1;
	else if (x > 0 && y < 0) answer = 4;
	else if (x < 0 && y > 0)answer = 2;
	else if (x < 0 && y < 0) answer = 3;
	cout << answer;

	return 0;
}