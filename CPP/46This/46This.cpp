// 46This.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{

};

class Monster
{
private:
    int Hp;
    int Att;

public:
    void Damage(/*Monster* const this*/)
    {
        // 멤버 함수안에 this라는 함수가 들어가는데 포인터 역할을 해준다
        // 생략 함수이기때문에 따로 안쓴다

        

        this->Hp -= 10;
    }

    void TestDamage(Monster* const _this)
    {
        // nullptr쓴다고 했는데 null체크를 안했다
        // 근데 이 코드는 터질수가 없다
        // 핵심은 null체크를 하는 이유는 null을쓰면 코드가 터지는데
        // 여기는 아예 외부 값을 가져다 쓴게 없으니 문제가 없다
        // 아래에 주석처리한걸 활성화시키면 바로 터진다

        // 그래서 null체크를 넣거나 null이 들어갈일이 없게 만들어야 함

        printf_s("안터짐");
        // this->Hp -= 10;
    }

    //void Damage(Monster* _Monster)
    //{
    //    // 포인터로 할경우 null체크를 무조건 한다
    //    // 메모리가 존재 할수도 있고 안할수도 있는데 
    //    // 없을때 오류가 나기때문에

    //    if (nullptr == _Monster)
    //    {
    //        return;
    //    }

    //    // 클래스가 포인터일 경우에는
    //    // "." 대신 "->"을 쓴다
    //    _Monster->Hp -= 10;
    //}

public:
    Monster()
        : Hp(100)
        , Att(10)
    {

    }
};

int main()
{
    Monster NewMonster1 = Monster();
    Monster NewMonster2 = Monster();

    /*NewMonster1.Damage(&NewMonster1);
    NewMonster2.Damage(&NewMonster2);*/

    Monster* NewMonsterPtr = nullptr;

    NewMonster1.TestDamage(nullptr);

    NewMonster1.Damage(/*&NewMonster1*/);
    NewMonster2.Damage(/*&NewMonster2*/);
}


