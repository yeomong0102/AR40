#pragma once
#include <map>
#include <string>

// Ό³Έν :
class GameEngineLevel;
class GameEngine
{
public:
	// constrcuter destructer
	GameEngine();
	~GameEngine();

	// delete Function
	GameEngine(const GameEngine& _Other) = delete;
	GameEngine(GameEngine&& _Other) noexcept = delete;
	GameEngine& operator=(const GameEngine& _Other) = delete;
	GameEngine& operator=(GameEngine&& _Other) noexcept = delete;

	virtual void GameInit() = 0;
	virtual void GameLoop() = 0;
	virtual void GameEnd() = 0;


protected:
	template<typename LevelType>
	void CreateLevel(const std::string& _Level)
	{
		LevelType* NewLevel = new LevelType();
		AllLevel_.insert(std::make_pair(_Level, NewLevel));
	}

private:
	std::map<std::string, GameEngineLevel*> AllLevel_;
};

