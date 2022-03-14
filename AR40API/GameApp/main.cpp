#include <Windows.h>

#include <GameEngineBase/GameEngineDebug.h>
#include <GameEngineBase/GameEngineWindow.h>
#include <GameEngineContents/IssacGame.h>


int __stdcall WinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ char* lpCmdLine,
    _In_ int       nCmdShow)
{
    GameEngineDebug::LeakCheckOn();

    // GameEngineBase�� cpp���� �𸣱⶧����
    /*

    GameEngineWindow::Destroy();
    MyGame.GameEnd();*/

    GameEngine::Start<IssacGame>();
}