
// 메모리를 쓰지 않으면 어떠한것도 이뤄지지않음

// 뭐든지 메모리를 사용함

#include <iostream>

// 인간이 보기 힘들지만 컴퓨터가 보기 쉬운 단계까지 처해주는게 컴파일러의 역할

// 리턴값  이름    인자
// int   Function0  ()
// 함수에서 리턴값의 항목이 void가 아니라는건
// 자신을 호출한 caller의 스택 영역에 리턴값 만큼의 바이트를 만들라고 하는것
int Function0()
{
    int PlayerHp = 100;
    int MonsterAtt = 10;

    PlayerHp -= MonsterAtt;

    // 자신만의 실행흐므을 가진 다른 함수를 만들수 있다
    return PlayerHp;
}

void Function1()
{
    // 자신만의 실행흐므을 가진 다른 함수를 만들수 있다
    int A0 = 10;
    int A1 = 10;
    int A2 = 10;
    int A3 = 10;
    int A4 = 10;
}

// main에서부터 시작한다.
// 이걸 바꿀수도 있지만 아무도 시도 안함
int main()
{
    // 지역(스코프)이라고 한다
    // 지역에서 만들어지는 변수를 지역변수

    // 어떤 함수의 실행흐름을 감당해야할 스택의 크기는
    // 내부에 존재하는 지역변수의 메모리 총합 +@
    int A0 = 10;
    int A1 = 10;
    int A2 = 10;
    int A3 = 10;
    int A4 = 10;

    // main은 function0의 호출자 caller라고 하게됨
    // Function0 피호출자

    int PlayerHpResult = Function0();
    Function1();
}

