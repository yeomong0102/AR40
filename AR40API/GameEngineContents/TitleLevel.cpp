#include "TitleLevel.h"
#include "GameEngine/GameEngine.h"

TitleLevel::TitleLevel() 
{
}

TitleLevel::~TitleLevel() 
{
}

void TitleLevel::Loading()
{

}

void TitleLevel::Update()
{
	GameEngine::GlobalEngine().ChangeLevel("Play");
}