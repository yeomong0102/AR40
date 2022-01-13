// 28Const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 값을 바꾸지않고 받은걸 그대로 사용
// 3번이 있어도 1번처럼 쓰는 이유는 넘겨받을떄 더 적게 받기 위해
void Test(const char* _Ptr)
{
    putchar(*_Ptr);

    // *_Ptr = 'f';
}

// const
void Test2(char* _Ptr)
{
    // *_Ptr = 5000;
}

// 값을 바꾸지 않고 받은걸 그대로 사용
void Test3(char _Ptr)
{
    // _Ptr = 5000;
}

int main()
{

    // const가 붙게되면 뒤에 붙은 자료형의 메모리 영역을
    // 비트적 상수화시킨다
    // => 4바이트의 비트하나도 바꿀수 없다.
    int Value = 0;
    
    const int* Ptr = &Value;

    // (const int)
    // 포인터 변수 안에 값을 변경할수 없음
    // const int* Ptr1 = &Value1;
    // 
    // Ptr1 = &Value2; 0  포인터의 주소만 변경
    // *Ptr1 = Value2; X  
    // 
    
    //   int                       (*)
    // 바꿀수 없는 int의   바꿀수 있는 주소값

    // 2가지 값을 가지고 있다


    const int * Value1 = 0;

    int Value1 = 1;
    int Value2 = 0;

    // const int* const Ptr = &Value1;
    // 주소값도 안바꾸고 어떤것도 안바꾼다고 생각

    // const int 
    const int* Ptr1 = &Value1;

    Ptr1 = &Value2;

    {
        int* const Ptr1 = &Value1;

        *Ptr1 = Value2;
    }

    {
        char printTestChar = 'c';

        Test(&printTestChar);
    }

    {
        printf_s("aaaa");
    }

    {
        char Arr[10] = { 'a', 'a', 'c', };

        Arr[1] = 't';

        int Value = printf_s(Arr);

        int a = 0;


    }

    {
        // 포인터는 기본적으로 원본이 있어야 함

        // 100번지
        int Origin = 0;

        // Ptr 원본의 주소값과   100번지
        //     원본의 값         0
        int* Ptr = &Origin;

        {
            // 원본의 값을 바꿀수 없다.
            const int* Prt = &Origin;
            // *Ptr = 200;
        }

        {
            // 원본의 주소값 100번지를 바꿀수 없다.

            int* const Prt = &Origin;
            *Ptr = 200;
        }

        {
            // 상수 선언했는데 초기값이 없으면 안됌

            // const int a; 
        }
    }
}

