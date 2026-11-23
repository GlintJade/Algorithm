#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	string line = "*";
	for (int i = 0; i < N; i++) {
		cout << line << '\n';
		line += "*";
	}


	return 0;
}