// 25White.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// (메모리 영역)

	// 조건체크
	// true면 실행

	// 빠져나가게 만들어야 함

	// 그 코드를 안에서 치는 것과
	// 조건문을 통해서 치는 2가지 선택이 있을수 있음

	int Value = 5;
	
	if (false)
	{
		int a = 0;
	}

	while (false)
	{
		// 참이면 실행하는 조건 반복형식이기 때문에 아무것도 실행 안되고 종료
	}

	while (0 != Value)
	{
		Value -= 1;
		int a = 0;
		// 실행코드
		// 실행코드 종료시
		// 반복문은 다시 조건체크로 돌아감
	}

	Value = 5;

	do
	{
		Value -= 1;
	} while (0 != Value);
}


