#include <App/LuaApp.hpp>
#include "LuaApp.hpp"

LuaApp::LuaApp()
{
    this->m_window = new sf::RenderWindow();
}

LuaApp::~LuaApp() {}

void LuaApp::init() {
    // window stuff
    this->m_window->create(sf::VideoMode(1280, 720), "Lua App");
    m_window->setFramerateLimit(60);
    m_deltaClock = new sf::Clock();
    ImGui::SFML::Init(*m_window);

    this->m_textEditor = new TextEditor();
    auto lang = TextEditor::LanguageDefinition::Lua();
    this->m_textEditor->SetLanguageDefinition(lang);
    
    // lua stuff
    this->m_luaVM = LuaVM::get();
}

void LuaApp::update() {

}

void LuaApp::draw() {
    ImGui::Begin("Hello, world!");
    ImGui::Button("Look at this pretty button");
    ImGui::End();
    
    m_textEditor->Render("Text Editor");
}

void LuaApp::shutdown()
{
}

void LuaApp::run() {
    this->init();
    while (m_window->isOpen()) {
        sf::Event event;
        while (m_window->pollEvent(event)) {
            ImGui::SFML::ProcessEvent(*m_window, event);
            if (event.type == sf::Event::Closed) {
                m_window->close();
            }
        }
        ImGui::SFML::Update(*m_window, m_deltaClock->restart());
        this->update();
        m_window->clear();
        this->draw();
        ImGui::SFML::Render(*m_window);
        m_window->display();
    }
    ImGui::SFML::Shutdown();
    this->shutdown();
}
