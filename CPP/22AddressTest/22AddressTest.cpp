// 22AddressTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void TestParameter(int value0, int value1, int value2, int value3)
{
    __int64 Value0Add = (__int64)&value0;
    __int64 Value1Add = (__int64)&value1;
    __int64 Value2Add = (__int64)&value2;
    __int64 Value3Add = (__int64)&value3;

    int a = 0;
}

void Function()
{
    int Test = 10;
    int FunctionAddress = (int)&Test;
}

void Function1()
{
    int Test = 10;
    int FunctionAddress1 = (int)&Test;
}

int main()
{
    int PlayerHp = 20;

    int Address = (int)& PlayerHp;

    Function();
    Function1();
}


