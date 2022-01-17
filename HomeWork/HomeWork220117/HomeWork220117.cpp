// HomeWork220117.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringCount(const char* _Left)
{
    int Count = 0;
    while (0 != _Left[Count])
    {
        Count += 1;
    }
    return Count;
}

int CountFirst(const char* _Text,int _Start, const char* FindStr)
{
    int FirstCount = StringCount(_Text);

    int a = 0;

    return -1;
}

int CountLast(const char* _Text, int _End, const char* FindStr)
{
    return -1;
}

int main()
{
     
    {

        int Count = CountFirst("aaa eee ttt asdfasd eee", 0, "eee");

        

    }
    {

        int Count = CountLast("aaa eee asdfasd eee", 50, "eee");
    
    }

}


