// 44HeaderAndCpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Player.h"
// 외부에서 참조한 헤더는 < >
// 내 프로젝트의 헤더는 " "

// 
int main()
{
    
}

void Player::Damage()
{
    Hp -= 10;
}

// cpp파일은 메인함수 아래쪽에 붙어버린다
// 즉
// #include "Player.cpp" 를 해줄필요가 없다 
// 만약 쓰게 되면 아래의 코드와 똑같은 위치에 있는 코드를 한번 더 쓰게됨으로 에러가 나버림

int gPlayerCount = 100;
