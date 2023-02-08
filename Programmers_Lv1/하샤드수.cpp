
// ���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�.
// ���� ��� 18�� �ڸ��� ���� 1 + 8 = 9�̰�, 
// 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�.
// �ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�,
// solution�� �ϼ����ּ���.

// x�� 1 �̻�, 10000 ������ �����Դϴ�.

#include <string>
#include <vector>
using namespace std;

//�Լ� ����.
void push_back_num(vector<int>& _vec, int x);
bool solution(int x);

//int main()
//{
//	// 1. ���� x�� 10�� ����� ��� ������ ���� 0�� �ɶ� ����
//	//    �� �ڸ��� ���� ���Ѵ�.
//	
//	// 2. �� �ڸ����� ���� ���ؼ� ������ ���������� Ȯ���ϸ� �ȴ�.
//	
//	bool is = solution(10);
//
//
//}

bool solutionHarshad(int x)
{
	bool answer = true;
	// ������ �ڸ����� ���ڸ� ���� �����迭�� ����
	vector<int> vec;
	push_back_num(vec, x);

	int sum_val = 0;	// vector�� ����ִ� ���� ���� ������ ����
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

		//���� 0�� �Ǹ� ��� ���� ���Ѱ��̹Ƿ� break�� for�� Ż��
		if (x / 10 == 0)
		{
			isEnd = true;
			break;
		}

		x /= 10;
	}

}