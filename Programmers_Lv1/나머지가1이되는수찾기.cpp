#include <string>
#include <vector>
#include <cmath>
using namespace std;

// �ڿ��� n�� �Ű������� �־����ϴ�.
// n�� x�� ���� �������� 1�� �ǵ��� �ϴ� 
// ���� ���� �ڿ��� x�� return �ϵ��� solution �Լ��� �ϼ����ּ���.
// ���� �׻� �������� ����� �� �ֽ��ϴ�.

// 3 �� n �� 1, 000, 000

int solution_remain1(int n)
{

    int answer = 0;

    for (int count = 2;count < 1000000 ;)
    {
        if (n % count != 1)
            count++;
        else // n%count == 1
            return count;
    }

}
//
//int main()
//{
//    int n = 81;
//    solution(10);
//}
