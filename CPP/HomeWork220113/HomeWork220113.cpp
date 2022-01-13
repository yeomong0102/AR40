// HomeWork220113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right)
{
    const int OriginNum = 10000;
    int Lcount = 0;
    int Rcount = 0;

    for (int i = 0; i < OriginNum; i += 1)
    {
        if (_Left[Lcount] != ' ')
        {
            _Right[Rcount] = _Left[Lcount];
            Lcount += 1;
            Rcount += 1;
        }
        else
        {
            Lcount += 1;
        }
    }



    /*while (0 != _Right[Rcount])
    {

        if (_Left[Lcount] != ' ')
        {
            _Right[Rcount] = _Left[Lcount];
            Lcount += 1;
            Rcount += 1;
        }
        else
        {
            Lcount += 1;
        }

    }

    printf_s(_Right);*/

    return ;
}

int main()
{

    char Text[10000] = { 0 };

    StringTrimRemove("aaa  bbb  ccc   ddd", Text);

    // "aaabbbcccddd" 공백제거를 해주는 함수 만들기
    printf_s(Text);

}

