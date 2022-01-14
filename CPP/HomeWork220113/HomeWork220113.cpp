// HomeWork220113.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//int StringCount(const char* _Left)
//{
//    int Count = 0;
//    while (0 != _Left[Count])
//    {
//        Count += 1;
//    }
//
//    return Count;
//}

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

    /*for (int LeftIndex = 0; 0 != _Left[LeftIndex]; LeftIndex += 1)
    {
        char ValueLeft = _Left[LeftIndex];
        char ValueRight = _Right[RightIndex];

        if (' ' != ValueLeft)
        {

           _Right[RightIndex] = _Left[LeftIndex];
           RightIndex += 1;

        }

        _Right[RightIndex] = 0;

        return;

    }

    */


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

    {
        // int aaa[4] = "a b"; <= int에서는 char에서 했던거 처럼 배열칸대신 문자열로 집어넣는게 안됨  

        char Text0[5] = "a b";
        char Text1[5] = { 0, };

        // Text1안에 있는 배열 값을 Text0에다 집어 넣고 싶을때
        // 일일이 Text0[5] = Text1[5]; 를 숫자만 바꿔서 치는게 아니라
        // 반복문 for, while 같은 방식으로 하는게 일반적이다

    }

    char Text[10000] = { 0 };

    StringTrimRemove("aaa  bbb  ccc   ddd adqsdqfasdq adasdqfadq      ", Text);

    // "aaabbbcccddd" 공백제거를 해주는 함수 만들기
    printf_s(Text);

}

