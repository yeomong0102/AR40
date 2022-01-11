// 17PointerOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 값의 접근
    {
        int value = 100;

        value = 30;

        int* PtrValue = &value;

        *PtrValue;
        // &vaㅣue의 주소 값을 가져와라

        *PtrValue = 999;
        // &vaㅣue의 주소 값을 999로 바꿔라
    }
    
    // 주소값 이동
    {
        int value = 0;

        int* PtrValue = &value;

        __int64 Address0 = (int)PtrValue;
        //                   &value의 주소값  

        __int64 Address1 = (int)(PtrValue +                    1);
        //                   &value의 주소값 + sizeof(int) * 숫자
        //                   &value의 주소값 + sizeof(*을 붙인 자료형의 타입) * 숫자

        // PlayerHp;
        // 주소값의 큰 의미는
        // 내가 어떠한 프로그램안에서 실체화 시켰을때
        // 유일한 키

        int a = 0;
    }
}

