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

void ToUpper(const char* _Left, char* _Right)
{
	int LeftCount = StringCount(_Left);

	int iCount = 0;
	for (int i = 0; i < LeftCount; i += 1)
	{
		char LeftValue = _Left[i];

		if ('a' <= _Left[i] && 'z' >= _Left[i])
		{
			_Right[i] = _Left[i] - ('a' - 'A');
		}
			

		else
		{
			_Right[i] = _Left[i];
		}
		
		int a = 0;

	}

}

int ToInt(const char* _Left)
{
	const int CArrCount = StringCount(_Left);

	int CountValue = 1;
	{
		int MulCount = CArrCount;

		while (MulCount -= 1)
		{
			CountValue *= 10;
		}
	}

	int Result = 0;

	for (int i = 0; i < CArrCount; i++)
	{
		char NumberCount = _Left[i];
		int CurValue = NumberCount - '0';
		// '0'을 빼는 이유는 NumberCount에서 '숫자'sms 특정값을 가지고 있고 그 값에서'0'의 특정값을 빼면
		// 그 특정값이 '숫지' 안에 있는 숫자가 되기때문에
			
		int Value = CurValue * CountValue;
		Result += Value;

		CountValue /= 10;

		int a = 0;
	}

	return Result;
}

void CharChange(char* _Text, char _Prev, char _Next)
{
	int CArrCount = StringCount(_Text);

	
	for (int i = 0; i < CArrCount; i += 1)
	{
		char LeftValue = _Text[i];

		if (LeftValue == _Prev)
		{
			_Text[i] = _Next;
		}
	}

	
}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	int CArrCount = StringCount(_Sorce);

	if (_End >= CArrCount)
	{
		return;
	}

	int _ResultIndex = 0;
		
	for (int i = _Start; i < _End; i += 1)
	{
		char LeftValue = _Sorce[i];

		_Result[_ResultIndex] = LeftValue;
		_ResultIndex += 1;

		
	}
}

int main()
{

	{
		
		char Text[100] = { 0, };

		
		ToUpper("pP1231dcwsec", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		int a = 0;
	}

	{
		char Text = '1';
		int Count = '2';

		int Value = ToInt("15815");

		int a = 0;
	}

	{
		// 이건 질문 안하셔도 됩니다.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";
		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		// aa| bb| cc| dd
		printf_s(Text);
	}
	{
		char Text[100] = "aa, bb, cc, dd";
		CharChange(Text, ',', '|');
		// aa| bb| cc| dd
		printf_s(Text);
	}
}