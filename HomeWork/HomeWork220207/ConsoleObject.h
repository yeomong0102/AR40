#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// ���� :
class ConsoleObject
{
public:
	// constrcuter destructer
	ConsoleObject(
		TextScreen* _Screen,
		const char* _Text,
		const ConsoleVector& _Pos);

	~ConsoleObject();

	// delete Function
	ConsoleObject(const ConsoleObject& _Other) = delete;
	ConsoleObject(ConsoleObject&& _Other) noexcept = delete;
	ConsoleObject& operator=(const ConsoleObject& _Other) = delete;
	ConsoleObject& operator=(ConsoleObject&& _Other) noexcept = delete;

	ConsoleVector GetPos()
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void SetMove(ConsoleVector _Value)
	{

		ConsoleVector TempVector = Pos_ + _Value;
		if (CheckPos(TempVector))
		{
			Pos_ += _Value;
		}

	}


	void Render();
	bool CheckPos(ConsoleVector _Vector);
	bool CheckPos(int _x, int _y);

protected:

private:
	// Has a �����̶�� �մϴ�.
	// �÷��̾�� ������ �ʹ����� ���� 
	// ���� �� ������ ������ ���� ������ �Ѵٸ�
	// ���̳� �����Ҵ�� �ڽŸ��� �޸𸮸� ������ �Ѵ�.
	TextScreen* Screen_;

	ConsoleVector Pos_;
	// ���� ���̴�.
	char Text_[3];
};
