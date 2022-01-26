// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{

public:
    int Value1;

    // 인자의 형식이 상수이기 때문에 다른 변수를 만들어야 했다
    MyInt(const int& _Value)
    {
        Value1 = _Value;
    }

    // 이게 이해가 안가는데 ()안에 자료형하고 가져올 인수도 안받았는데 이게 맞나?
    // 직접 돌려보니 MyInt Value와 Result의 값이 각각 0일때는 상관없는데 
    // 둘중 하나라도 0보다 큰 숫자를 집어 넣으면 위아래 신경안쓰고 더 큰 숫자로 받아들인다
    MyInt& operator++ ()
    {
        ++Value1;
        return *this;
    }

    // int를 집어넣은것은 이미 같은것이 하나 있기 때문에 넣음)
    MyInt& operator++ (int)
    {
        // 후위 증감자일 경우 먼저 증감하는것이 아니기 때문에 
        // temp라는 변수를 선언하고 값을 집어넣었다
        MyInt temp(Value1);
        // this는 Value1을 가르키는 것과 다름없다
        ++(*this);
        // temp의 값을 리턴시키면 끝
        return temp;
    }
   
};



int main()
{
    int Value = 0;
    int Result = 0;

    Result = ++Value;
    Result = 0;
    Result = Value++;

    MyInt MyValue = 0;
    MyInt MyResult = 0;

    MyResult = ++MyValue;
    MyResult = 0;
    MyResult = MyValue++;
}



