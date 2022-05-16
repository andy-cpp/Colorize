#pragma once
#include <string>

enum class Color{
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE,

    BRIGHT_BLACK,
    BRIGHT_RED,
    BRIGHT_GREEN,
    BRIGHT_YELLOW,
    BRIGHT_BLUE,
    BRIGHT_MAGENTA,
    BRIGHT_CYAN,
    BRIGHT_WHITE,

    RESET
};

struct Style {
    static const int NONE = -1;
    static const int BOLD = 1 << 0;
    static const int UNDERLINE = 1 << 1;
};


std::string Colorize(std::string const& str, int style = Style::NONE);

std::string Colorize(std::string const& str, Color color, int style = Style::NONE);

std::string Colorize(std::string const& str, Color color, Color bg, int style = Style::NONE);