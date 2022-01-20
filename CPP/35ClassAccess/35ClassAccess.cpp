// 35ClassAccess.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 보통 자신의 내부에서 왠만한 모든 행동을 정의하고
// 행동이 아닌 상태는 외부에서 접근하지 못하게 하는게 기본이다.

int Value = 0;

// 자료형
// 
// 어떠한 개념의 정의
// 
// 기본 자료형
// basic
// 사용자 정의 자료형

class Player
{
// 접근 제한 지정자 문법.
// public: 외부에 공개한다
// private: 개인적인

    // 클래스의 기본접근 제한자는 private: 이다
private:
    int Hp;
    int Att;
    int Y;

    // 함수와 변수는 같은 접근제한 지정자에 영향을 받는다.
public:
    void Damage()
    {
        Hp -= 10;

        if (Hp <= 0)
        {
            int a = 0;
        }
    }

    void Jump()
    {
        Y += 10;
    }
};

int main()
{
    // 값형으로 내 자료형을 선언했고 
    // 그 안에 멤버 변수가 있다면

    // 이것만 사용해서 코딩하는것을 순수한 객체지향
    Player NewPlayer = Player();

    NewPlayer.Damage();

    NewPlayer

}

