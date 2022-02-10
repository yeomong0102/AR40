#pragma once
#include "ConsoleMath.h"
#include "TextScreen.h"

// ���� :
class Player
{
public:
	// constrcuter destructer
	Player(TextScreen* _Screen, const char* _Text);
	~Player();

	// delete Function
	Player(const Player& _Other) = delete;
	Player(Player&& _Other) noexcept = delete;
	Player& operator=(const Player& _Other) = delete;
	Player& operator=(Player&& _Other) noexcept = delete;

	// ������ �ܼ��� �Լ��� ���� cpp�� �������� �ʾƵ� �������ϴ�.
	ConsoleVector GetPos() 
	{
		return Pos_;
	}

	void SetPos(ConsoleVector _Value)
	{
		Pos_ = _Value;
	}

	void Render();
	void Update();

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

