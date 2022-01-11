// 15PointerEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int PlayerHp = 10;

    int* PtrHp = &PlayerHp;
        // 첫번째 포인터의 특징
        // 컴파일러가 문법적으로 포인터는
        // 특수하게 체크하고

        // 대부분의 크래킹 해킹프로그램은 메모리 조작을 기반으로 한다.

    int PlayerHp2 = 10;

    PtrHp = &PlayerHp2;

    int PointerSize = sizeof(int*);
    // x86에서는 4비트
    // x64에서는 8비트
}


