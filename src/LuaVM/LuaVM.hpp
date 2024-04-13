#ifndef LUA_VM_HPP
#define LUA_VM_HPP
#include <Utils/Singleton.hpp>
#include <lua.hpp>

class LuaVM : public Singleton<LuaVM>
{
    lua_State* L;
public:
    LuaVM();
    ~LuaVM();
}

#endif