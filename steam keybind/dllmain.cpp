#include <Windows.h>
#include "steam_keybind.h"

void init() 
{
    bool aimbot;
    if (steam_keybind(VK_RBUTTON))
    {
        aimbot = true;
    }
    else 
    {
      aimbot = false;
    }


}

bool __stdcall DllMain(void* module, DWORD dll, LPVOID reserved)
{
    UNREFERENCED_PARAMETER(module);
    UNREFERENCED_PARAMETER(reserved);

    if (dll == 1)
    {
        init();
    }


    return 1;
}

