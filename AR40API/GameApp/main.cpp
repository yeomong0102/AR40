#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/IssacGame.h>

IssacGame MyGame;

void GameInit()
{
    MyGame.GameInit();
}

void GameLoop()
{

    // Rectangle(GameEngineWindow::GETDC(), 100, 100, 200, 200);
    MyGame.GameLoop();
    
}

int __stdcall WinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ char* lpCmdLine,
    _In_ int       nCmdShow)
{
    GameEngineDebug::LeakCheckOn();

    // GameEngineBase의 cpp까지 모르기때문에
    GameEngineWindow::GetInst().CreateGameWindow(hInstance, "GameWindow");
    GameEngineWindow::GetInst().ShowGameWindow();
    GameEngineWindow::GetInst().MessageLoop(GameInit, GameLoop);

    GameEngineWindow::Destroy();
    MyGame.GameEnd();
}