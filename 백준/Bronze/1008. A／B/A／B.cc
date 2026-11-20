#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B;
	cin >> A >> B;

	double answer = (double)A / B;

	cout << fixed << setprecision(10) << answer; //상대오차 10^-9라 소수점 10자리까지
	return 0;
}