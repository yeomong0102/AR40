﻿// 51FunctionDelete.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
public:
    A()
    {

    }

    A(const A& _Other) = delete;
};

int main()
{
    std::cout << "Hello World!\n";
}

