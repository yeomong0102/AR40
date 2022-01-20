// 37Constructer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{

private:
    // 클래스 내부의 변수도 리터럴 초기화 가능은 한데 안씀
    // 왜 안쓰는지 모름
    // int Hp = 0;
    // int Att = 0;
    int Hp;
    int Att;

    // 이걸 디폴트 생성자라고 한다
public:
    // 특징 1. 전역 함수처럼 객체없이 가능.
    // 특징 2. 이름이 무조건 클래스 이름과 같다
    // 특징 3. 리턴값이 없다.
    // 특징 4. 멤버이니셜라이저 라는 초기화 전용 문법을 사용할수 있음
    /*Player*/
    /*int*/
    Player(int Value) : Att(Value)
             , Hp(Value)
    {
        // 멤버이니셜라이저 문법
        // : 멤버변수명(초기화 값)
        // , 멤버변수명(초기화 값)

        // 변수 이름 + 생성자로
    }

    Player() : Att(int(10))
        , Hp(1000)
    {
        // 멤버이니셜라이저 문법
        // : 멤버변수명(초기화 값)
        // , 멤버변수명(초기화 값)

        // 변수 이름 + 생성자로
    }
};
// 선언과 동시에 0을 넣어주는것이 초기화

int main()
{
    int A = int(0); // 초기화
    A = 20; // 대입

    // 클래스가 뭔가를 못하면
    // 그건 그냥 안만들었으니까 안된다

    // 내가 만든적이 없는데 되는건?
    // 생략되었다
    // 혹은 컴파일러가 만들어버린것

    Player NewPlayer0 = Player();

    // 명시적
    Player NewPlayer1 = 20;

    Player NewPlayer2 = Player(20);
}


