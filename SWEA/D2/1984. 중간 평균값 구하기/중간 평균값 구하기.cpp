#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case) {
        int arr[10];
        for (int i = 0; i < 10; i++)
            cin >> arr[i];

        sort(arr, arr + 10);
        double sum = 0;
        for (int i = 1; i < 9; i++) sum += arr[i];
        double avg = sum / 8;
        int answer = int(avg + 0.5);

        cout << "#" << test_case <<' ' << answer << '\n';
	}

	return 0;
}