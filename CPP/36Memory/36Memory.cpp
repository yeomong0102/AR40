﻿// 36Memory.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 바이트 패딩
// 1. 클래스 내부에서 가장 바이트 크기가 큰 자료형의 크기를 기준으로 잡는다
 
// 2. 바이트 크기가 그보다 작은 자료형이 있다면
//    그 자료형의 바이트 크기를 가장 큰 자료형의 크기로 바꾼다

// 3. 만약 그보다 작은 자료형들이 연속될 경우
//    가장 큰 바이트로 묶어서 처리할수 있다면 묶는다.

class Player
{
    // 기준 8 
public:
    char Def;
    int Att; // 8바이트
    __int64 Att1; // 8바이트
    char Hp1[5]; // 8바이트
};

// ???? 얼마????
class Test
{

};

int main()
{
    // 00000000 00000000 00000000 00000000 
    int Value;

    Player NewPlayer = Player();
    (__int64)& NewPlayer.Def; 
    int PlayerSize = sizeof(Player);
    int TestSize = sizeof(Test);
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
