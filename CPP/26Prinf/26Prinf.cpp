// 26Prinf.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


//printf_s
#include <iostream>

// 함수호출규약 키워드

// 모든 함수에 붙어있다

// 생략
void test()
{

}

// __cdecl 전역함수에 자동으로 붙음

// 호출자와 피호출자 간의 메모리 정리 규칙을 기본적으로 정의함
// // 기계어 적으로 조금 달라짐
// __stdcall
// 함수호출

int __cdecl MyPrintf(const char* const _Text)
{
    int Count = 0;

    while (0 != _Text[Count])
    {
        putchar(_Text[Count]);

            Count += 1;
    }
    return 0;
}

int main()
{
    printf_s("a");
}


