#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	int a, b;
	for (int tc = 1; tc <= T; tc++) {
		cin >> a >> b;
		cout << "Case #" <<tc <<": " << a + b << '\n';
	}

	return 0;
}