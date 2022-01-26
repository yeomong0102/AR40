// 49ClassOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Position
{
public:
    int X;
    int Y;

public:
    void Move(const Position& _Moveposition)
    {
        X += _Moveposition.X;
        Y += _Moveposition.Y;
    }

    // 연산자 겹지정
    // operator
    Position operator+(const Position& _MovePosition)
    {
        return Position(X + _MovePosition.X, Y + _MovePosition.Y);
    }

public:
    Position(int _X, int _Y)
        : X(_X), Y(_Y)
    {

    }


};

int main()
{
    // 크기 1280 720
    // 클래스의 경우 생성자를 만들고
    // 인자가 많다면 마치 배열처럼 초기값을 넣어줄수 있다.
    // Positin MainPlayerPos = Position(1280 / 2, 720 / 2);

    Position MainPlayerPos = { 1280 / 2, 720 / 2 };

    Position MovePos = { 100, 0 };


    Position ResultPos = MainPlayerPos + MovePos;
    // MainPlayerPos.Move(MovePos);
    /*MainPlayerPos.X = 1280 / 2;
    MainPlayerPos.Y = 720 / 2;*/




}

