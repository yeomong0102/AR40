// 20PointerOperatorEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Number = 0;

    int* PtrNumber = &Number;

    *PtrNumber = 300;

    // *(PtrNumber + 0) = 999;
    // *PtrNumber == PtrNumber[0]
    PtrNumber[0] = 999;

    // *(PtrNumber + 1) = 300;
    // *(PtrNumber + 1) == PtrNumber[1]
    PtrNumber[1] = 300;


}


