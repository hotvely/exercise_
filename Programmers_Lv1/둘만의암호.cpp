//�� ���ڿ� s�� skip, �׸��� �ڿ��� index�� �־��� ��, ���� ��Ģ�� ���� ���ڿ��� ����� �մϴ�.��ȣ�� ��Ģ�� ������ �����ϴ�.
//
//���ڿ� s�� �� ���ĺ��� index��ŭ ���� ���ĺ����� �ٲ��ݴϴ�.
//index��ŭ�� ���� ���ĺ��� z�� �Ѿ ��� �ٽ� a�� ���ư��ϴ�.
//skip�� �ִ� ���ĺ��� �����ϰ� �ǳʶݴϴ�.
//���� ��� s = "aukks", skip = "wbqd", index = 5�� ��, a���� 5��ŭ �ڿ� �ִ� ���ĺ��� f����[b, c, d, e, f]���� 'b'�� 'd'�� skip�� ���ԵǹǷ� ���� �ʽ��ϴ�.
//���� 'b', 'd'�� �����ϰ� 'a'���� 5��ŭ �ڿ� �ִ� ���ĺ���[c, e, f, g, h] ������ ���� 'h'�� �˴ϴ�.������ "ukks" ���� �� ��Ģ��� �ٲٸ� "appy"�� �Ǹ� ����� "happy"�� �˴ϴ�.
//
//�� ���ڿ� s�� skip, �׸��� �ڿ��� index�� �Ű������� �־��� �� �� ��Ģ��� s�� ��ȯ�� ����� return�ϵ��� solution �Լ��� �ϼ����ּ���.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
using namespace std;

char* solution(const char* s, const char* skip, int index);
char* findChar_5_exceptionSkipconst(const char* s, const char* skip, int index);
char CheckAndReturnString(int index, const char* skip, char _char);

//int main()
//{
//    char* answer = solution("aukks","wbqd",5);
//    cout << (*answer) << endl;
//
//}

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s, const char* skip, int index)
{    
    //Ư�� ������ +5 ��ŭ ���ڸ� ã�Ƽ� �������ָ� �ȴ�. �ٸ�, skip���ڿ��� ���ԵǾ� �ִ� ���ڴ� ����
    //z�� �Ѿ�� �Ǹ� a�� �ٲ��ش�.
    char* test = findChar_5_exceptionSkipconst(s, skip, index);

    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc( sizeof(char) * strlen(s));
    //for(int)

    return answer;
}

char* findChar_5_exceptionSkipconst(const char* s, const char* skip, int index)
{
   
    char temp[100];
    // ���ڿ� s�� ������ ���ؼ� �ӽ� �迭�� ������ ��.
    int s_count = strlen(s);
    //int _skip_count = strlen(_skip);
    for (int n = 0; n < s_count; n++)
    {
        temp[n] = CheckAndReturnString(index, skip, s[n]); // üŷ�Լ�return���Ҵ����ָ��.
    }
    temp[s_count] = '\0';
    return temp;
}

char CheckAndReturnString(int index, const char* skip, char _char)
{
    //�޾ƿ� ���ڿ� +index��ŭ�� �� �ٲ���, ���ִ� ���ȿ� skip�� ������ �ǳʶ�
    for (int n = 0; n < index; n++)
    {
        _char++;
        if (_char > 'z')
            _char -= 26;

        for (int k = 0; k < strlen(skip); k++)
        {
            if (skip[k] == _char)
            {
                _char++;
                if (_char > 'z')
                    _char -= 26;
            }
        }

    }


    return _char;
}
