#include <LuaVM/LuaVM.hpp>
#include "LuaVM.hpp"
#include <Utils/Log.hpp>
LuaVM::LuaVM()
{
    Log::log("Creating Lua VM");
}

LuaVM::~LuaVM()
{
    Log::log("Destroying Lua VM");
}
