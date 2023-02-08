//두 문자열 s와 skip, 그리고 자연수 index가 주어질 때, 다음 규칙에 따라 문자열을 만들려 합니다.암호의 규칙은 다음과 같습니다.
//
//문자열 s의 각 알파벳을 index만큼 뒤의 알파벳으로 바꿔줍니다.
//index만큼의 뒤의 알파벳이 z를 넘어갈 경우 다시 a로 돌아갑니다.
//skip에 있는 알파벳은 제외하고 건너뜁니다.
//예를 들어 s = "aukks", skip = "wbqd", index = 5일 때, a에서 5만큼 뒤에 있는 알파벳은 f지만[b, c, d, e, f]에서 'b'와 'd'는 skip에 포함되므로 세지 않습니다.
//따라서 'b', 'd'를 제외하고 'a'에서 5만큼 뒤에 있는 알파벳은[c, e, f, g, h] 순서에 의해 'h'가 됩니다.나머지 "ukks" 또한 위 규칙대로 바꾸면 "appy"가 되며 결과는 "happy"가 됩니다.
//
//두 문자열 s와 skip, 그리고 자연수 index가 매개변수로 주어질 때 위 규칙대로 s를 변환한 결과를 return하도록 solution 함수를 완성해주세요.
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

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s, const char* skip, int index)
{    
    //특정 문자의 +5 만큼 문자를 찾아서 리턴해주면 된다. 다만, skip문자열에 포함되어 있는 문자는 제외
    //z를 넘어가게 되면 a로 바꿔준다.
    char* test = findChar_5_exceptionSkipconst(s, skip, index);

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc( sizeof(char) * strlen(s));
    //for(int)

    return answer;
}

char* findChar_5_exceptionSkipconst(const char* s, const char* skip, int index)
{
   
    char temp[100];
    // 문자열 s의 갯수를 구해서 임시 배열에 저장할 것.
    int s_count = strlen(s);
    //int _skip_count = strlen(_skip);
    for (int n = 0; n < s_count; n++)
    {
        temp[n] = CheckAndReturnString(index, skip, s[n]); // 체킹함수return값할당해주면됨.
    }
    temp[s_count] = '\0';
    return temp;
}

char CheckAndReturnString(int index, const char* skip, char _char)
{
    //받아온 문자에 +index만큼을 해 줄껀데, 해주는 동안에 skip에 있으면 건너뜀
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
