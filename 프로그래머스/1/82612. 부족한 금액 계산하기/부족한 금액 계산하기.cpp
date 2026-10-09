using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0, mon = money;
    for(int i = 1; i<=count; i++) answer += price *i;
    return answer - mon > 0 ? answer-mon : 0;
}