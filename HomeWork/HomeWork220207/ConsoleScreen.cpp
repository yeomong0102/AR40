// ConsoleScreen.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include "TextScreen.h"
#include "Player.h"
#include "Monster.h"
#include <crtdbg.h>
#include "ConsoleGlobalInst.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    MainScreen.SettingScreen();

    // ������
    // ���ڤ�
    // ������

    while (MainPlayer.GetWork())
    {
        MainScreen.SettingScreen();
        MainPlayer.Render();
        // NewMonster.Render();
        MainScreen.PrintScreen();

        MainPlayer.Update();
        // NewMonster.Update();
    }
}
