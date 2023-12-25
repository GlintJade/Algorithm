#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> array) {
    int* arr = new int[1000] {};
    for (int i = 0; i < array.size(); i++) {  //(1) array = [1, 1, 2, 2, 3, 4, 4, 4, 5, 5]  //(2) array = [1, 1, 2, 2]
        arr[array[i]]++;
    }
    int value, max = 0, count=0; //count가 0이든 1이든 상관 없? , value는 어디에 써야할까
    for (int i = 0; i < 1000; i++) { //(1) arr = [0, 2, 2, 1, 3, 2, 0, 0 ..]  //(2)arr = [0, 2, 2, 0, 0 ... ]
        if (arr[i] > max) { //max보다 높은 횟수가 나오면 max=arr[i], count=1로 만들어서 이후에 나오는 최빈값 여러 개 나올 때의 오류 방지
            max = arr[i]; //max는 arr배열의 최댓값 저장, 최댓값이 가리키는 값을 반환하는 변수가 필요 -> value
            count = 1;
            value = i;
        }
        else if (arr[i] == max) {//count>=2 . return -1은 이후 배열 값 무시
            count++;
        }
    }
    cout << value;
    return count >= 2 ? -1 : value;
}