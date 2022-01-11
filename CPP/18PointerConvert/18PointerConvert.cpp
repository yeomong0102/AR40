// 18PointerConvert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Value = 0;

    int* Ptr = &Value;

    // 어지간하면 안쓰려고 함
    // 명시적 형변환
    // 정수         주소
    __int64 Address = (__int64)Ptr;
}


