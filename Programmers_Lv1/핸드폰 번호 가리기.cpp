#include <string>
#include <vector>

using namespace std;

// ���α׷��ӽ� ������� �������� ��ȣ�� ���� �������� ���� �� ������ ��ȭ��ȣ�� �Ϻθ� �����ϴ�.
// ��ȭ��ȣ�� ���ڿ� phone_number�� �־����� ��, 
// ��ȭ��ȣ�� �� 4�ڸ��� ������ ������ ���ڸ� ���� * ���� ���� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

string solution_ChangePhoneNumber(string phone_number)
{
    string answer = "";
    vector<int> temp;
    for (int i = 0; i < phone_number.size()-4; i++)
    {
        phone_number[i] = '*';
    }
    
    answer = phone_number;


    return answer;
}