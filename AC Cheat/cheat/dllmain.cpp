#include "gui.h"
#include <thread>
#include <windows.h>

DWORD WINAPI MainThread(LPVOID lpParam) {
    // create gui
    gui::CreateHWindow("Cheat Menu", "Cheat Menu Class");
    gui::CreateDevice();
    gui::CreateImGui();

    while (gui::exit) {
        gui::BeginRender();
        gui::Render();
        gui::EndRender();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // destroy gui
    gui::DestroyImGui();
    gui::DestroyDevice();
    gui::DestroyHWindow("Cheat Menu", "Cheat Menu Class");

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, nullptr, 0, nullptr);
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}