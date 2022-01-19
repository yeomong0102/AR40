// 34UserType.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 기본 자료형
// class int
//{
// 안에 int가 해야하는것들을 전부 넣어둠
//
//}
// 우리가 볼수 없는 곳에 숨겨져 있다.

// 그 자료형들에 내것도 넣어줘

class Player
{

    // 아무것도 없고 이제부터 내가 다 만들어야함
    // 만들면 할수 있음
    //  => int가 뭔가를 해
    //     내가 Player를 못해
    // => 내가 안만들어서 못하는 거다
    // 다른 자료형들이 들어올수 있다.
    int Hp;
    int Att;
    int Def;

public:
    Player operator +(const Player& _OtherPlayer)
    {
        return Player();
    }
};

class MyInt
{
public:
    char* ToString()
    {

    }
};

int main()
{
    // int와 class는 기본적으로 문법의 개념자체는 똑같다
    // 다만 똑같이 쓸려고하면 다른부분들이 있어서 내가 알아서 되게끔 뭔가 추가를 해야함

    Player NewPlayer = Player();
    int NewValue = int();

    NewValue = NewValue + NewValue;
    NewPlayer = NewPlayer + NewPlayer;
}


