#pragma once
#include "TextScreen.h"
#include "Monster.h"
#include "Player.h"

extern TextScreen MainScreen;
extern Monster* AllMonsters;
extern Player MainPlayer;

class GlobalValue
{
	// Ŭ���� ���� ������ �����Ҽ��� �ֽ��ϴ�.
public:
	// Ŭ������ ���� ���������� �˴ϴ�.
	//static TextScreen MainScreen;
	//static Monster* AllMonsters;
	//static Player MainPlayer;


};

// ���� �̷��� ���ʿ䰡 �����ϴ�.
// extern GlobalValue Inst;

//
//// ���� :
//class ConsoleGlobalInst
//{
//public:
//	// constrcuter destructer
//	ConsoleGlobalInst();
//	~ConsoleGlobalInst();
//
//	// delete Function
//	ConsoleGlobalInst(const ConsoleGlobalInst& _Other) = delete;
//	ConsoleGlobalInst(ConsoleGlobalInst&& _Other) noexcept = delete;
//	ConsoleGlobalInst& operator=(const ConsoleGlobalInst& _Other) = delete;
//	ConsoleGlobalInst& operator=(ConsoleGlobalInst&& _Other) noexcept = delete;
//
//protected:
//
//private:
//
//};

