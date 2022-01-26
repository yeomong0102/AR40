// 48NameSpace.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// std
// 
// namespace란 모든 내부에 있는 자료형 변수들에게 
// namespace이라는 별칭을 붙여서 구분하게 해준다
// 이름을 붙인다는것 외에는 다른 기능이 없다.
// 중첩 가능
// Player::Skill

// 이 수업에서 using namespace를 쓰지않는 이유는 
// 만약 아래에서 둘다 각각 Player와 Monster에 대해 쓴다고하면 코드를 작성할때 
// Skill만 작성하게되어 뭐가 뭔지 모르게 된다

// using namespace std;
// 는 C++스탠다드를 의미하게 된다

namespace Player
{
    class Skill
    {

    };
}

namespace Monster
{
    class Skill
    {

    };
}

int main()
{

    std::cout << "Hello World!\n";
}


