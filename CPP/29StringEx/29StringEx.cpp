// 29StringEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 넣어준 문자열의 길이가 얼마냐?
int StringLen(const char* _Ptr)
{
    // _Ptr[0] = 'o';

    int Count = 0;

    while (0 != _Ptr[Count])
    {
        Count += 1;
    }
    
    return Count;
    
}

int StringTrimRemove(const char* _Left, char* _right)
{
    // for while if switch
    // "aaabbbcccddd"
}

int main()
{
    //const가 붙어서 수정할수없다.
    

    char Text[5] = "aaa";

    StringLen("aaa");

    char Text[1024] = { 0 };

    StringTrimRemove("aaa  bbb  ccc   ddd", Text);

    // "aaabbbcccddd" 공백제거를 해주는 함수 만들기
    printf_s(Text);

}


