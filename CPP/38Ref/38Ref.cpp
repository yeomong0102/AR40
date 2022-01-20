// 38Ref.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
private:
    int Att_;
    int Hp_;

public:
    Player() 
        : Att_(int(100))
        , Hp_(int(100))
    {

    }
};

class TestClass
{
    char Arr[10000];
};

// 레퍼런스는 상시 *이 붙어잇는 포인터이기 때문에
// sizeof를 해보면 그 자료형의 크기가 나오겠지만
// 실제적으로 해석될때는 포인터를 넣어준것과 동일하게 처리되기 때문에
// 8바이트 넣어준것이다

void Func(TestClass* _ValuePtr)
{
    // 값이 안들어올 가능성이 없다.
    // == 무조건 값을 넣어야 작동하는 함수
    // 그래서 null 체크도 안함

    // 반대로 포인터로 하면 null체크를 해야함
    // 값이 안들어올 가능성이 생기니까
}



int main()
{
    int Value = 0;

    int* ValuePtr = &Value;

    (*ValuePtr) = 100;

    int Ptr = sizeof(*ValuePtr);

    // 레퍼런스
    // 무조건 다른 변수를 초반에 대입해줘야 한다.

    // int& ValueRef = 0;


    int& ValueRef = Value;

    ValueRef = 100;

    int IntPtr = sizeof(ValueRef);

    // (*ValuePtr) == ValueRef == Value

    // 상시 * 붙어있는 퐁니터
    // int A = int();
}


