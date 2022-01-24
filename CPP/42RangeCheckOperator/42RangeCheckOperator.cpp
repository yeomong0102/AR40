// 42RangeCheckOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Att;

// :: 만 쓰면 전역
// 한 단계의 영역의 구분
// :: 아무곳에서도 속하지 않은 것들을 표현하려고 한다
// 호출 할때 쓴다
// 선언을 여러번해도 컴파일러가 하나로 퉁치는데
// class 문은 예외다

void Func();

class Player
{


private:
	
	int Att;
	int Hp;

public:
	Player();

	void Func()
	{
		::Att - Player::Att;
	}
};

int main()
{
	::Att;
	// ::Player::Att
}

// 전역안에 안속해 있다는것은 말이 안되기 때문에
// :: 은 생략된다
void /*::*/Func() 
{

}

Player::Player()
	: Att(10)
{

}

void /*::*/Player::Func()
{
	// 결국 명시적으로 완전히 기재해줘야 하는 경우가 생긴다
}

