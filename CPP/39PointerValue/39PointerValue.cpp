// 39PointerValue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Monster
{

};

// 맵에 몬스터가 없다고 한다면 포인터
void FightMonster(Monster* _OtherMonster)
{

}

// 맵에 몬스터가 무조건 있다면 참조 Ref
void FightMonster(Monster* _OtherMonster)
{

}

int main()
{
    int* Ptr;
    int*& PtrRef = Ptr;
    int** DPtr = &Ptr;
    // int*****& PtrRef = Ptr;

    // int*&;
}


