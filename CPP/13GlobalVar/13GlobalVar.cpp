// 13GlobalVar.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 전역변수
// 어떠한 실행흐름에도 속하지 않는 변수를 전역변수라고 한다
int gPlayerHp = 0;

void Heal()
{
    gPlayerHp += 10;
    return;
}

void Damage()
{
    gPlayerHp -= 10;
    return;
}

// PlayerHp는 main에 속했음
int main()
{
    // 함수의 실행흐름 안에서 선언된 변수
    // 함수의 실행흐름이 끝나면 파괴된다.

    // 1. 선언이 되어야 사용할수 있다.
    // 만들어지지않은 변수는 사용할수 없다
    // playerHp = 200;

    // 변수의 선언(변수를 만들어 내라.)
    // = 0 리터럴 초기화
    // ;

    // 개념적으로 본다면 복제한 것을 또 다시 복제했다
    Heal();
    Heal();
    Heal();
    Heal();
    Heal();
    Heal();

    Damage();

    int PlayerLastHp = gPlayerHp;
}


