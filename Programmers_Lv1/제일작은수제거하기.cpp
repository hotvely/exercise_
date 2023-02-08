#include <string>
#include <vector>

using namespace std;
// 정수를 저장한 배열, arr 에서 가장 작은 수를 제거한 배열을 리턴하는 함수, solution을 완성해주세요.
// 단, 리턴하려는 배열이 빈 배열인 경우엔 배열에 - 1을 채워 리턴하세요.
// 예를들어 arr이[4, 3, 2, 1]인 경우는[4, 3, 2]를 리턴 하고, [10]면[-1]을 리턴 합니다.

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