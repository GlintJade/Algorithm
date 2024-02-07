#include <iostream>
#include <stdlib.h>
int arr[10];
using namespace std;
int main() {
	int index, sum1=0,sum2 = 0;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		sum1 += arr[i];
		if (sum1 > 100) {
			index = i;
			break;
		}
	}
	sum2 = sum1 - arr[index];

	if (sum1 - 100 > abs(sum2-100)) {
		cout << sum2;
	}
	else cout<< sum1;

	return 0;
}