// HomeWork.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //int a = 0;
    //
    //int Arr[10] = { 0, };
    //int Index = 0;

    //for (int i = 1; i < 10s i += 1)
    //{
    //    Arr[i] = i * 2;
    //}

    int index = 0;
    int Arr[10] = { 0, };

    while (index != 10)
    {

        // 0부터 시작해서
        Arr[index] = index * 2;

        index += 1;

        // 0 제외
        // 2 4 6 8 10 12 14 16 18
        // 배열이 가득찰때까지 짝수로만 채워라


    }

    while (index != 10)
    {
        Arr[index] = (index * 2) - 1;


        index += 1;
    }






    return 0;
}
