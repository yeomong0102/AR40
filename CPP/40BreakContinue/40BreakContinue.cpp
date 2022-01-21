// 40BreakContinue.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Arr[10] = { 10, 333, 222, 1, 231, 2323, 12 };
	bool IsOne = false;
    
	// 반복문 내부에서 쓰이는 break는 switch문 내부에서와 쓰임새가 다르다
	// 반복문에서는 break를 만나는순간 그 반복문을 종료하는 의미이다
	// 반복문의 return같은 느낌

	// 주의점은 해당 반복문만 나가는 것이기 때문에 

	for (int i = 0; i < 10; i+= 1)
	{
		if (Arr[0] == 1)
		{
			// 가장 가까운 하나의 반복만 탈출이 가능
			while (true)
			{
				IsOne = true;
				break;
			}

			if (true == IsOne)
			{
				break;
			}
			
		}
	}

	int a = 0;

	int ArrTest[10] = {};
	int Count = 0;
	for (int i = 0; i < 20; i+= 1)
	{
		if (1 == (i % 2))
		{
			continue;
		}

		ArrTest[Count] = i;
		Count += 1;
	}

	// while은 증감문이 없으므로
	// 
}


