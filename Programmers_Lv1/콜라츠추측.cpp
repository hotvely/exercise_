#include <string>
#include <vector>

using namespace std;

// 1. 입력된 수가 짝수라면 2로 나눕니다.
// 2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
// 2-1. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
// 몇 번이나 반복해야 하는지 반환하는 함수, solution을 완성해 주세요.
// 단, 주어진 수가 1인 경우에는 0을, 
// 작업을 500번 반복할 때까지 1이 되지 않는다면 –1을 반환해 주세요.

#include <string>
#include <vector>

using namespace std;
int solutionCollatz(int num)
{
    int count = 0;
    
   
    double double_num_ = 0;

    if (num == 1)
        return 0;


    for (count = 0; count < 500; count++)
    {

        if (num % 2 == 0)
        {
            if (num < 0)        //혹시 num이 int범위 넘으면..
                double_num_ /= 2;
            else                //아직 int범위 안에 있을땐 int num사용.
                num /= 2;
        }
        else
        {

            if (num < 0) // 혹시나 int num이 3배수를 계산하는 와중에 int의 범위를 넘어 버리는 경우 double로 바까줘어..
            {
                double_num_ = num;
                double_num_ = double_num_ * 3 + 1;
            }
            else        // 아직 int형 범위 내부에 존재 할때..
                num = num * 3 + 1;
        }

        if (num == 1)
        {
            return count + 1;
        }

    }

    if (num != 1)
    {
        count = -1;
    }

    return count;
}
