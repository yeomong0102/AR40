// 09Scope.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{// main 지역
    // 실행흐름안에 실행흐름을 만들수 있다
    
    // 이름없는 지역
    {
        int Left = 0;
        int Right = 0;
        Left + Right;
    }

    {
        int Left = 0;
        int Right = 0;
        Left - Right;
    }
}

