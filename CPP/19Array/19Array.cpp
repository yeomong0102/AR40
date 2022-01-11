// 19Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    {
        // 배열은 다음과 같습니다.

    
        // 배열은 초기화가 다릅니다.
    
        int MonsterHpArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 0};

    
        // 컨트롤 K C
    

        // 범위 주석
      
        // <- 줄 주석
     
        int MonsterHpArray0[10] = { 10 /*0, 0, 0*/};
     
        int MonsterHpArray1[10] = { /*0, 0, 0*/ };
     
        int MonsterHpArray2[10] = { 0 /*0, 0, 0*/ }; 

     
        MonsterHpArray2[0] = 999;

     
        int MonsterHp = 10;

     
        int value;

     
        // 포인터는 
     
        int* Ptr = &MonsterHpArray[0];
     }

    {

        // 배열과 포인터는
        // 배열의 이름이 똑같이 주소값로 처리되고 포인터와 호환되는 문법이 많다
        // 배열의 이름 == 같은 자료형 포인터
        int MonsterHpArr[10] = {  };

        int value;

        int* Ptr = &MonsterHpArr[0];

        // int*  int 포인터 형
        // int[] int 배열형
    }

}


