// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
long long N, M,reminder;
long long remainders[1001];
long long answer;
int main()
{
	cin >> N >> M;
	long long value;
	for (int i = 0; i < N; i++) 
	{
		cin >> value;
		reminder = (reminder + value) % M;
		if (reminder == 0)
		{
			answer++;
		}
		remainders[reminder]++;
	}
	for (int i = 0; i <= M; i++)
	{

		answer += remainders[i] * (remainders[i] - 1) / 2;
	}
	cout << answer;
}
