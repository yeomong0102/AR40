// 43RangeCheckOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 100번지
int Att;
// 100번지 위 선언과 같은 메모리 위치임
int Att;

class Player
{
public:
    // 100번지가 아닌 어딘가
    // 위의 선언과 전혀 다른 위치에 있음

    int /*Player::*/Att;

    void Func()
    {
        int a = 0;
    }

public:
    Player();
};

void Func();

int main()
{
    Player NewPlayer = Player();

    // 전역에 속한   플레이어에 속한
    // ::             Player            ::Att

    NewPlayer.Func();

    NewPlayer.Player::Att = 200;
}

Player::Player()
{
    Func();
}

void Func();