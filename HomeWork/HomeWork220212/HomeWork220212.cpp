// HomeWork220212.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Myint
{
public:
    Myint& operator()() 
    {
        return *this;
    }
};

int main()
{
    Myint NewA0;
    Myint NewA1(NewA0);
}

