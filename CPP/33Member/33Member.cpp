﻿// 33Member.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Value = 0;


// 1차 개념정리

// 실체가 있다 존재가 있다.
// int => 4바이트 정수형
// int a = 0; => 실체화 A가 실체화되면 
// 주소가 있다. 주소를 시작으로한 메모리가 생기게되는데

// 전역의 개념
// 그 누구에게도 속하지 않은 변수와 함수들이 존재하는 공간

// { 
//   실체가 없는 것들
//   int bool char 같은 자료형
//   사용자 정의 자료형 일체(class struct enum union) 설계도
//   int => 4바이트 정수형의 설계도 
// 
//   class Player => Player라는 내가 생각한 개념의 설계도
//   class => 설계도 => 실체가 아니다
// 
// 
//   에 들어있지 않으면 전역
// 
//   실체가 있는 것들
//   전역 변수 혹은 객체 (메모리화 된 실체)
//   전역함수




//   클래스를 통해서 만들어진 객체
// }

// 지역 개념
// 함수의
// {
//   지역 변수 혹은 객체 (사용자 정의 자료형을 통해서 만들어진 메모리화된 실체들)
//   지역 함수 
//   에 들어있으면 지역이 붙는다
//   지역 함수라는건 없음
// }
// 

// 멤버의 개념
// class 이름
// {
//   멤버라고 부른다
//   EX) int hp = 0;
// }
class Player
{
// 멤버 변수
// 내가 표현하려는 개념의 상태
    int Hp;
    int Att;

    // c는 멤버 함수가 없다
    // 플레이어는 맞을수 있다.
    
// 내가 표현하려는 개념의 행동을 표현한다고 한다
    void Damage(int _Damage)
    {
        Hp -= _Damage;
    }
};

// c에서는 함수
// c++에서는 전역 함수
void Func()
{

}

int main()
{
    Player NewPlayer = Player();
    int Value = int();
}


