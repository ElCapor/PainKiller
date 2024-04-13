add_requires("lua")
target("PainKiller")
    -- project settings
    set_kind("binary")
    add_languages("c++20")
    -- source files
    add_includedirs("src")
    add_files("src/**.h")
    add_files("src/**.cpp")
    -- link libraries
    add_packages("lua")
