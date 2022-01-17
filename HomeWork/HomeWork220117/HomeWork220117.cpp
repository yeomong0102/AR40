// HomeWork220117.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int PStringCount(const char* _Left)
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
    int FirstCount = PStringCount(_Text);

    char Str = *FindStr;

    int StartNum = 0;
    
    
    for (int i = _Start; i < FirstCount; i += 1)
    {
        char FirstValue = _Text[i];

        if (FirstValue == Str)
        {
            StartNum = i + 1;
            break;
          
        }
    }
    

    return StartNum;
}

int CountLast(const char* _Text, int _End, const char* FindStr)
{
    int LastCount = _End;

    char Str = *FindStr;

    int LastNum = 0;


    for (int i = LastCount; i > -1; i -= 1)
    {
        char LastValue = _Text[i];

        if (LastValue == Str)
        {
            LastNum = i;
            break;

        }
    }


    return LastNum;
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


