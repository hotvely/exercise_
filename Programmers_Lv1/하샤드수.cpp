
// 양의 정수 x가 하샤드 수이려면 x의 자릿수의 합으로 x가 나누어져야 합니다.
// 예를 들어 18의 자릿수 합은 1 + 8 = 9이고, 
// 18은 9로 나누어 떨어지므로 18은 하샤드 수입니다.
// 자연수 x를 입력받아 x가 하샤드 수인지 아닌지 검사하는 함수,
// solution을 완성해주세요.

// x는 1 이상, 10000 이하인 정수입니다.

#include <string>
#include <vector>
using namespace std;

//함수 모음.
void push_back_num(vector<int>& _vec, int x);
bool solution(int x);

//int main()
//{
//	// 1. 정수 x를 10의 배수로 계속 나눠서 몫이 0이 될때 까지
//	//    각 자리의 수를 구한다.
//	
//	// 2. 각 자리수의 합을 더해서 나누어 떨어지는지 확인하면 된다.
//	
//	bool is = solution(10);
//
//
//}

bool solutionHarshad(int x)
{
	bool answer = true;
	// 각각의 자리수의 숫자를 구해 가변배열에 저장
	vector<int> vec;
	push_back_num(vec, x);

	int sum_val = 0;	// vector에 들어있는 값의 합을 저장할 변수
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		sum_val += (*it);
	}
	if (x % sum_val == 0)
		return answer = true;

	return answer = false;
}

void push_back_num(vector<int>& _vec, int x)
{
	bool isEnd = false;
	for (int n = 0; ; n++)
	{	
		_vec.push_back(x % 10);

		//몫이 0이 되면 모든 수를 구한것이므로 break로 for문 탈출
		if (x / 10 == 0)
		{
			isEnd = true;
			break;
		}

		x /= 10;
	}

}