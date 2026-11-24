#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	double arr[1005] = { 0 };
	double maxx = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
	}

	double val;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		val = (arr[i] * 100.0) / maxx;
		arr[i] = val;
		sum += val;
	}

	cout << (double)sum / N;


	return 0;
}