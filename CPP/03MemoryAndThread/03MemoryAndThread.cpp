// 03MemoryAndThread.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// int main을 실행해줘를 보면 진입점 함수라는걸 알수 있다

#include <iostream>

// 함수
// 함수의 실행흐름을 한줄한줄씩 보내느것을 쓰레드라고 함
// 그 쓰레드는 스택 영역을 가지고 
// 리턴값 이름 인자
// int    main    ()
// { 흐름의 시작
//     1 컴퓨터에 요구사항
//     1 컴퓨터에 요구사항
//     1 컴퓨터에 요구사항
//     1 컴퓨터에 요구사항
//     코드
// } 흐름의 끝

int main()
{
    // 실행흐름은 위에서부터 아래로 실행
    // 오른쪽에서 왼쪽으로 진행
    std::cout << "Hello World!\n";

    // 어떤걸 적어야 내가 원하는 작업이 실행될까?
    std::cout << "Hello World!\n";
}

