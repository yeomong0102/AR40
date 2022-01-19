// 31Nullptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 날 쓰지 마라
    // int* PtrZero0 = 0;

    // 정수형이 아닌 0번지를 가리키는 상수를 만들자
    // C++
    int* PtrEx; // <= nullptr을 넣어줘야함 업계및 프로그래밍 기본상식
    int* PtrZero0 = 0;
    int* PtrZero1 = nullptr;

    // *PtrZero1 = 2000;

    if (nullptr == PtrZero1)
    {
        return 1;
    }
    return 100;
}


