// 12FunctionOverloading.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 컴퓨터가 인식하는 함수의 이름 규칙은 
// 이름 + 인자의 자료형

void Func()
{

}

// Funcint
void Func(int _Number)
{

}

//Funcintint
void Func(int _Number, int _Number1)
{

}

int main()
{
    // 100번지에 있는 Func를 실행해라
    Func(10);
    Func(10, 10);
}


