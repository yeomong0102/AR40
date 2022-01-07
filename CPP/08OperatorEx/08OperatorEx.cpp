// 08OperatorEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int PlayerHp = 10;
    int MonsterAtt = 2;
    // 귀찮아서 만들어진 축약연산자
    // // 복합 할당 연산자
    // PlayerHp = PlayerHp - MonsterAtt;
    // ==
    PlayerHp -= MonsterAtt;
    PlayerHp += MonsterAtt;
    PlayerHp /= MonsterAtt;
    PlayerHp *= MonsterAtt;
    PlayerHp %= MonsterAtt;
    PlayerHp <<= MonsterAtt;
    PlayerHp >>= MonsterAtt;
    PlayerHp ^= MonsterAtt;
    PlayerHp |= MonsterAtt;
    PlayerHp &= MonsterAtt;
}


