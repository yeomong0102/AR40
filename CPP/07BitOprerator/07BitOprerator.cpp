﻿// 07BitOprerator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //        00000000 00000000 00000000 00000000

    // int는 음수까지 표현 가능

    int ValueL = 0b00000000000000000000000000000110;
    int ValueR = 0b00000000000000000000000000001001;

    // 논리형
    // 2의 보수법
    int Result = 0b11111111111111111111111111111111; // -1

    // -1로 정함
    // 0b11111111111111111111111111111111;
    
    // 32번째 비트가 1이면 1
    // 0b10000000000000000000000000000000;

    int Test = 0;
    // 비트반전
    // 어떠한 이름이 관리하는 메모리 영역의 모든 비르를 반전
    Result = ~Test;
    Result = ~0b00000000000000000000000000000000;

    // | OR
    // 비트를 하나하나씩 비교해서 위쪽과 아래쪽 비투중
    // 하나라도 1이 있으면 그 순서의 비트는 1이 된다.
    ValueL = 0b00000000000000000000000000000110;
    ValueR = 0b00000000000000000000000000000011;
    //       0b00000000000000000000000000000111;
    Result = ValueL | ValueR;

    // & And
    // 비트를 하나하나씩 비교해서 위쪽과 아래쪽 비투중
    // 둘다 1이면 1 아니면 0.
    ValueL = 0b00000000000000000000000000000110;
    ValueR = 0b00000000000000000000000000000011;
    //       0b00000000000000000000000000000010;
    Result = ValueL & ValueR;

    // ^ 배타적 논리합
    // 비트를 하나하나씩 비교해서 위쪽과 아래쪽 비투중
    // 두개의 비트가 다르면 1 같으면 0
    ValueL = 0b00000000000000000000000000000110;
    ValueR = 0b00000000000000000000000000000011;
    //       0b00000000000000000000000000000101;
    Result = ValueL ^ ValueR;

    //
    Result = 0b00000000000000000000000000000001 << 1;
    //       0b00000000000000000000000000000010 << 1;

    // Result = 0b10000000000000000000000000000001 << 1;
    // 절대 안씀 (오버플로우 발생)
    // 칩셋 제조사에 따라 나올수 있는 값이 달라져서 안씀

    Result = 0b00000000000000000000000000000010 >> 1;
    //       0b00000000000000000000000000000001;
    
    // Result = 0b10000000000000000000000000000001 >> 1;
    //          0b01000000000000000000000000000000
    // 이번건 잘됨
    // 오른쪽 비트 쉬프트는 끝에 1이 밀려도 오류가 안난다
 
}


