// 54Arr2D.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Arr[3] = { 1, 2, 3 };

    int* Ptr = &Arr[0];

    // Ptr[0] == Arr[0]

    int Arr2D[3][3] = { { 1, 2, 3 } , { 4, 5, 6 } , { 7, 8, 9 } };

    int* Add00 = &Arr2D[0][0];
    int* Add22 = &Arr2D[2][2];
}


