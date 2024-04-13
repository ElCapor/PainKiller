set_allowedmodes("debug", "releasedbg", "release", "coverage")
set_defaultmode("debug")
add_requires("lua")
add_requires("sfml")
add_requires("imgui-sfml")

target("PainKiller")
    -- project settings
    set_kind("binary")
    add_languages("c++20")
    add_defines("IMGUI_EDITOR_NO_BOOST")
    if is_mode("debug") then
        set_symbols("debug")
    elseif is_mode("release") then
        set_optimize("fastest")
    end
    -- source files
    add_includedirs("src")
    add_files("src/**.cpp")
    -- link libraries
    add_packages("lua")
    add_packages("sfml")
    add_packages("imgui-sfml")