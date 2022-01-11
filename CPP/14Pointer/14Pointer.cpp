// 14Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

    // sizeof 연산자는 
    // == + - /
    // sizeof(타입 혹은 변수)
    // 그 타입에 byte크기를 리턴해준다
    // 이때 컴파일러는 
    // 사실 이미 알고 있기때문에
    // 우리 눈에는 마치 sizeof(변수)
    // 4 8 같은 숫자로 미리 변경 시켜버린다.

    // 포인터는
    // 1. 자료형 + * 해서 타입을 선언합니다.
    // 2. 내용은 분명히 정수
    // 3. 문법은 따로 처리합니다.
    // 4. 진짜로 메모리에 할당되어있는 위치

    int Value = 30;

    //Value

    // &는 Value를 메모리의 진짜 실제위치 정수로 바꿈
    int* Ptr = &Value;

    // 포인터화가 되었음
    // 포인터 관련 

    *Ptr = 10;

    int IntSize = sizeof(int);
    int BoolSize = sizeof(bool);

    
}


