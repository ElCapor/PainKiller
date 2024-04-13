{
    files = {
        [[build\.objs\PainKiller\windows\x64\release\src\LuaVM\LuaVM.cpp.obj]],
        [[build\.objs\PainKiller\windows\x64\release\src\main.cpp.obj]]
    },
    values = {
        [[C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Tools\MSVC\14.36.32532\bin\HostX64\x64\link.exe]],
        {
            "-nologo",
            "-dynamicbase",
            "-nxcompat",
            "-machine:x64",
            [[-libpath:C:\Users\Clean\AppData\Local\.xmake\packages\l\lua\v5.4.6\f7a1b6e07e99413691d173f686cd85cb\lib]],
            "lua.lib"
        }
    }
}