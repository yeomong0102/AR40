// 24Switch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// 문자형

	// 컴퓨터가 문자를 이해할수 없기때문에 어떤 문자 대비 1개의 숫자와 매칭이 되어 이해함

	// 01 = 'a'
	// char형은 1바이트

	int Value = 'a';

	char Input = 'a';

	if ('a' == 97)
	{
		int a = 0;
	}

	// 비교를 시작함
	
	switch (Input)
	{
		// case Value: <= X
	// 변수를 사용할수 없음
		// break;를 안걸면 설령 그 case의 경우이고 실행되었더라도 
		// 그 아래로 내려가서 코드를 실행한다
	case 'a':
		// 일반적으로 지역변수를 선언할수 없다.
	{
		int a = 0;
	}

		break;
	case 'b':
	{
		int a = 0;
	}
		break;
		// 디폴트는 미리 만들어 두는것이 좋다
	default:
	{
		// 위의 대상 모두가 해당안된다면.
		int a = 0;
	}
	break;
	}
}


