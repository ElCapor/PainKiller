#pragma once

#include <iostream>
#include <string>

class Log
{
public:
    template <typename... Args>
    static void error(const std::string &message, Args &&...args)
    {
        std::cerr << "\033[1;31m"; // Red
        std::cerr << "[ERROR] " << message << std::endl;
        std::cerr << "\033[0m"; // Reset colors
        (std::cerr << ... << std::forward<Args>(args)) << std::endl;
    }

    template <typename... Args>
    static void warn(const std::string &message, Args &&...args)
    {
        std::cerr << "\033[1;33m"; // Yellow
        std::cerr << "[WARN] " << message << std::endl;
        std::cerr << "\033[0m"; // Reset colors
        (std::cerr << ... << std::forward<Args>(args)) << std::endl;
    }

    template <typename... Args>
    static void log(const std::string &message, Args &&...args)
    {
        std::cerr << "\033[1;34m"; // Blue
        std::cerr << "[LOG] " << message << std::endl;
        std::cerr << "\033[0m"; // Reset colors
        (std::cerr << ... << std::forward<Args>(args)) << std::endl;
    }

    template <typename... Args>
    static void debug(const std::string &message, Args &&...args)
    {
        std::cerr << "[DEBUG] " << message << std::endl;
        (std::cerr << ... << std::forward<Args>(args)) << std::endl;
    }
};
