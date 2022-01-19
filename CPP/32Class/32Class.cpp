// 32Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 객체지향은 프로그래밍의 패러다임
// 전에는 절차지향
// 변수와 함수만으로 했고 가장 명료하고 가장 빨랐지만 
// 생산성이 없었음
// 몇몇가지 객체지향 언어가 나옴 근데 별로 좋은느낌은 아니였음
// 여러가지가 많았는데
// 스트룹스트룹이 C에 대한 관심을 줄이기 위해 C++을 만듬
// 객체지향스타일과 절차지향 스타일이 융합된 C++이 나오고 많은 C 프로그래머들도 이주함
// C++은 멀티 패러다임 언어
// 객체지향과 절차지향을 둘다 할 수있음

// 이걸 개념
// MainCharacter

// C스타일

// 0~255 0~255 0~255 0~255
// 00000000 00000000 00000000 00000000 

// 클래스
// class 이름
// { <== 클래스의 시작
// }; <== 클래스의 끝
class Player
{

};

class Monster
{

};


int Color;
int Window[1280 * 720];

// 변수와
// 상태
int MoveSpeed = 10;
int Att = 10;
int Hp = 1000;

// 객체지향에서 전역변수란 없다

// 함수만으로 
// 행동
void Heal(int _Value)
{
    Hp += _Value;
}

void Damage(int _Value)
{
    Hp -= _Value;
}

int main()
{
    // 기본자료형
    // 이것도 없으면 아무것도 못하니까
    int; // 정수
    char; // 문자
    char* a = nullptr; // 그에대한 주소값

    // unsigned int != int;
    unsigned int;
    unsigned char;
    unsigned __int64;
}

