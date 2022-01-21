// TestTextRpg.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class Player
{
private:
    int Att;
    int Hp;
    int Def;

public:

    bool IsDeath()
    {
        return Hp <= 0;
    }

    int GetAtt()
    {
        return Att;
    }

    void Damage(int _Damage)
    {
        printf_s("플레이어가");
        char Arr[10] {0, };
        _itoa_s(_Damage, Arr, 10);
        printf_s(Arr);
        printf_s("의 데미지를 입었습니다.\n");

        Hp -= _Damage;
    }
public:
    Player()
        : Att(10)
        , Hp(10000)
        , Def(5)
    {
        int a = 0;
    }
};

class Monster
{
private:
    const char* Name;

    int Att;
    int Hp;
    int Def;
public:
    
    bool IsDeath()
    {
        return Hp <= 0;
    }

    int GetAtt()
    {
        return Att;
    }

    void Damage(int _Damage)
    {
        printf_s("몬스터가");
        char Arr[10]{ 0, };
        _itoa_s(_Damage, Arr, 10);
        printf_s(Arr);
        printf_s("의 데미지를 입었습니다.\n");
        Hp -= _Damage;
    }
public:
    Monster()
        : Att(10)
        , Hp(100)
        , Def(1)
    {
        int a = 0;
    }
};

class FightZone
{
public:
    void Fight(Player& _Player, Monster& _Monster)
    {
        // if (nullptr == _Monster)
        // {
        //    return;
        // }
        while (true)
        {
            if (_Monster.IsDeath())
            {
                break;
            }

            _Monster.Damage(_Player.GetAtt());
            _Player.Damage(_Monster.GetAtt());

            
        }
        
        int a = 0;
    }
public:
    FightZone()
    {

    }
};

int main()
{
    Player MainPlayer = Player();
    Monster MainMonster[10] = {"오크", "드래곤", "코볼트"};
    FightZone NewFightZone = FightZone();

    int MonsterIndex = 0;

    while (true)
    {
        NewFightZone.Fight(MainPlayer, MainMonster[MonsterIndex]);

        if (true == MainPlayer.IsDeath())
        {
            printf_s("플레이어가 패배했습니다.");
        }

        MonsterIndex += 1;

        if (sizeof(Monster) / sizeof(MainMonster) <= MonsterIndex)
        {
            printf_s("플레이어가 승리했습니다. \n");
            char Arr[10]{ 0, };
            _itoa_s(MonsterIndex, Arr, 10);
            printf_s(Arr);
            printf_s("마리 몬스터를 죽였습니다.\n");
            break;
        }
    }

}

