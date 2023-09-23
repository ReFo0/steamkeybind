#include "memory.h"
#include "steam_keybind.h"

auto steam_getasynckeystate_address = signature_scan("GameOverlayRenderer64.dll", "40 53 48 83 EC 20 80 3D ? ? ? ? ? 8B D9");
using getasynckeystate = short(__fastcall*)(int);


short steam_keybind(const int key)
{
	auto steam_getaynckeystate_func = (getasynckeystate)steam_getasynckeystate_address;
	return steam_getaynckeystate_func(key);
}
