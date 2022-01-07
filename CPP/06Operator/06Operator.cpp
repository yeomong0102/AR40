// 06Operator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    // 1.1 산술 연산자

    int Left = 7;
    int Right = 3;
    int Result = 0;

    Result = Left - Right;
    Result = Left + Right;

    // 아래쪽 연산이 더 느리다
    Result = Left / Right;
    Result = Left * Right;
    Result = Left % Right;
    Result = -Right;


    // 제로 디비전
    // 완전히 잘못된 코드
    // Result = Left / 0;
    // Result -= 1;
    // Result = Left / Result;

    // int 4바이트 정수형
    // 1바이트가 00000000
    // 00000000 00000000 00000000 00000000


    // 1.2 비교 연산자


    // bool 기본 자료형
    // 1바이트 논리형
    // 참과 거짓을 표기하기 위한 자료형
    // 참의 거짓의 개념부터
    // 00000000
    // 모든 비트가 0이면 거짓이다.
    // 그 이외의 모든 상황을 참으로 이해
    // 01000100
    // 10000000
    // 00001000

    // false
    // 0b를 앞에 붙이면 비트 모양으로 우리가 보기 쉽게 표현 가능
    // true는 논리형 상수이며
    // 100 <= 정수형 상수
    
    // bool bResult = false;
    // bool bResult = 0b00000000;
    
    // // bool bResult = ture;
    // bool bResult = 0b00000001;

    bool bResult = false;

    bResult = Left > Right;
    bResult = Left < Right;
    bResult = Left >= Right;
    bResult = Left <= Right;
    bResult = Left == Right;
    bResult = Left != Right;

    // 1.3 논리 연산자
    // 왼쪽 오른쪽의 거짓과 참을 기반으로 
    // 거짓혹은 참을 리턴

    // 왼쪽과 오른쪽 둘다 참이어야 참인경우
    bResult = true && false;
    bResult = false && true;
    bResult = true && true;
    bResult = false && false;

    // 왼쪽 이나 오른쪽중 하나만 참이더라도 참
    bResult = true || false;
    bResult = false || true;
    bResult = true || true;
    bResult = false || false;

    // 왼쪽이 오른쪽의 반대되는 경우
    bResult = !true;  // false;
    bResult = !0b00000010;  // false;
    bResult = !false;  // true;



}


