﻿// 47PrintfTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void MyPrint_s(const char* const _Text)
{
    int Count = 0;

    char* Ptr = (char*)&_Text;
    Ptr += 8;

    while (0 != _Text[Count])
    {
        if ('%' != _Text[0])
        {g
            putchar(_Text[Count]);
            Count += 1;
        }
        else
        {
            switch (_Text[Count +1])
            {
            case 'd':
            {
                int* IntValuePtr = (int*)Ptr;
                Ptr += 8;
                break;
            }
            case 's':
            {
                break;
            }
            default:
                break;
            }

            int a = 0;
        }
  
    }

}

// "..."은 컴파일러가 알아서 들어오는 인자들을 인식하여 int Value 0, int Value  같은형식으로 
// 받을 형식을 만들어서 처리 해주는 일종의 도움이다
void VarTest(...)
{

}

int main()
{
    VarTest(10, 20, "aaa", 30);

    printf_s("%d NumberPrint", 11000)

    /*MyPrint_s("Hello World!\n");*/
    
}


