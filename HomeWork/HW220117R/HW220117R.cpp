// HW220117R.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int StringLenth(const char* _Left)
{
    int Count = 0;
    while (0 != _Left[Count])
    {
        Count += 1;
    }
    return Count;
}

int CountFirst(const char* _Text, int _Start, const char* _FindStr)
{
    int FindStrLen = StringLenth(_FindStr);
    int TextStrLen = StringLenth(_Text);
 

    for (int i = _Start; i < TextStrLen; i++)
    {
        int Count = 0;
        int ComCount = FindStrLen;

        for (int j = 0; j < ComCount; j++)
        {
            char TextChar = _Text[i + j];
            char FindChar = _FindStr[j];

            if (_Text[i + j] == _FindStr[j])
            {
                ++Count;
            }
            else 
            {
                ComCount = 0;
            }

            
        }

        if (Count == FindStrLen)
        {
            return i;
        }
        
    }

    
    


    
}

int main()
{

    {

        int Count = CountFirst("aaa eee ttt asdfasd eee", 0, "eee");



    }
    {

        // int Count = CountLast("aaa eee asdfasd eee", 50, "eee");

    }

}
