#ifndef LUAPPP_HPP
#define LUAPPP_HPP

#include <SFML/Graphics.hpp>
#include <imgui.h>
#include <imgui-SFML.h>
#include <LuaVM/LuaVM.hpp>
#include <Utils/TextEditor.h>

class LuaApp
{
public:
    LuaApp();
    ~LuaApp();

    void init();
    void update();
    void draw();
    void shutdown();
    void run();

private:
    sf::RenderWindow* m_window;
    sf::Clock* m_deltaClock;
    LuaVM* m_luaVM;
    TextEditor* m_textEditor;
};

#endif // LUAPPP_HPP