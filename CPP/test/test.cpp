// test.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Rervers(const char* _Sorce, char* _Result)
{
    int Count = 0;
    const int OriginNum = 100;

    for (int i = 0; i < OriginNum; i += 1)
    {
        if (0 != _Sorce[Count])
        {
            Count += 1;
        }
    }



    char _Text1[OriginNum] = { 0, };


    // _Text1[100] = { 1, 2, 3, 4, 5, 6, 7, 8};
    // _Text[100] = { 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i = 0; i < OriginNum; i += 1)
    {
        _Text1[i] = _Sorce[Count];

        if (-1 != Count)
        {
            Count -= 1;
        }

        else
        {
            _Result[OriginNum] = _Text1[i];
        }

    }

}

int main()
{
    char Text[100] = { };
    Rervers("0123456789", Text);
}


