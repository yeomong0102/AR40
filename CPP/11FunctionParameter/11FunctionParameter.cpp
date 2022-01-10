// 11FunctionParameter.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// int 
// 지역변수
//
// 초기화 도리수 있다 1가지 뿐이다

void Heal(int PlayerHp)
{
    PlayerHp += 10;
}

int main()
{
    int playerMaxHp = 100;
    int PlayerHp = 20;

    Heal(PlayerHp);
}


