#include "IssacGame.h"
#include "EndingLevel.h"
#include "PlayLevel.h"
#include "TitleLevel.h"


IssacGame::IssacGame() 
{
}

IssacGame::~IssacGame() 
{
}

void IssacGame::GameInit()
{
	CreateLevel<TitleLevel>("Title");
	CreateLevel<PlayLevel>("Play");
	CreateLevel<EndingLevel>("Ending");
	ChangeLevel("Title");
}

void IssacGame::GameLoop()
{

}

void IssacGame::GameEnd()
{

}