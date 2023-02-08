#include <string>
#include <vector>

using namespace std;
// ������ ������ �迭, arr ���� ���� ���� ���� ������ �迭�� �����ϴ� �Լ�, solution�� �ϼ����ּ���.
// ��, �����Ϸ��� �迭�� �� �迭�� ��쿣 �迭�� - 1�� ä�� �����ϼ���.
// ������� arr��[4, 3, 2, 1]�� ����[4, 3, 2]�� ���� �ϰ�, [10]��[-1]�� ���� �մϴ�.

int Find_minVal(vector<int> _arr)
{
    int min = _arr[0];
    for (int n = 0; n < _arr.size(); n++)
    {
        if (min > _arr[n])
        {
            min = _arr[n];
        }
    }

    return min;
}

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    int minValue = Find_minVal(arr);
    if (arr.size() == 1)
    {
        answer.push_back(-1);
    }
    else
    {
        for (int n = 0; n < arr.size(); n++)
        {
            if (arr[n] != minValue)
            {
                answer.push_back(arr[n]);
            }
        }
    }
    
    return answer;
}