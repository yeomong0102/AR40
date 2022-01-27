// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{
public:
    int GetValueValue()
    {

    }
    int GetValueRef()
    {
        int Value;
    }
public:
    int Value1;

    // 인자의 형식이 상수이기 때문에 다른 변수를 만들어야 했다
    MyInt(const int& _Value)
    {
        Value1 = _Value;
    }

    
    // 직접 돌려보니 MyInt Value와 Result의 값이 각각 0일때는 상관없는데 
    // 둘중 하나라도 0보다 큰 숫자를 집어 넣으면 위아래 신경안쓰고 더 큰 숫자로 받아들인다


    // 그리고 아래 두 MyInt& 방식은 메모리가 


    // int인자를 안받으면 전위 증감자로 인식함
    // 문법이니까 그냥 지키자
    MyInt& operator++ ()
    {
        Value1 += 1;
        return *this;
    }

    // int가 들어가면 자연스럽게 후위 증감연산자로 인식한다
    // 그냥 규칙이다
    // int를 집어넣은것은 이미 같은것이 하나 있기 때문에 넣음
    MyInt& operator++ (int /*_Value*/)
    {
        // 후위 증감자일 경우 먼저 증감하는것이 아니기 때문에 
        // ReturnValue라는 변수를 선언하고 값을 집어넣었다
        MyInt ReturnValue = Value1;
        // this는 Value1을 가르키는 것과 다름없다
        Value1 += 1;
        // temp의 값을 리턴시키면 끝
        return ReturnValue;
    }
   
    // this
    // 예를 들어서 MyInt라는 클래스가 있고 그 클래스 안에서 뭔가 일어난다고 하자
    // this->Value 같은걸 한다고 하면 이때 this는?
    // 외부에서 들어오는 인자로 선언이 실행 될때 외부에서 들어오는 인자의 주소값이 된다
    // 외부에서 들여오는 인자의 형태를 변수 _Value라고 가정하면
    // this = &_Value 가 된다

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

//  MyResult = MyValue.operator++();
    MyResult = ++MyValue;
    MyResult = 0;
    MyResult = MyValue++;
}



