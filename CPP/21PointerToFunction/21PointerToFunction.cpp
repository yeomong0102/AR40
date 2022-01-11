// 21PointerToFunction.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//void Heal(int _Hp)
//{
//    _Hp += 10;
//}

// int Heal(int _Hp)
// {
//     _Hp += 10;
//     return _Hp;
// }
//

void Heal(int* _Hp)
{
    _Hp += 10;
}

int main()
{
    int PlayerHp = 0;

    Heal(&PlayerHp);
}


