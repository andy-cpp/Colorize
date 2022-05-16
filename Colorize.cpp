#include "Colorize.hpp"

static const std::string COLOR_TABLE[] = {
    "\x1B[30m",
    "\x1B[31m",
    "\x1B[32m",
    "\x1B[33m",
    "\x1B[34m",
    "\x1B[35m",
    "\x1B[36m",
    "\x1B[37m",

    "\x1B[90m",
    "\x1B[91m",
    "\x1B[92m",
    "\x1B[93m",
    "\x1B[94m",
    "\x1B[95m",
    "\x1B[96m",
    "\x1B[97m",

    "\x1B[m"
};

static const std::string COLOR_TABLE_BG[] = {
    "\x1B[40m",
    "\x1B[41m",
    "\x1B[42m",
    "\x1B[43m",
    "\x1B[44m",
    "\x1B[45m",
    "\x1B[46m",
    "\x1B[47m",

    "\x1B[100m",
    "\x1B[101m",
    "\x1B[102m",
    "\x1B[103m",
    "\x1B[104m",
    "\x1B[105m",
    "\x1B[106m",
    "\x1B[107m",
};

static const std::string STYLE_TABLE[] = {
    "\x1B[1m",
    "\x1B[4m"
};

inline std::string StyleToStr(int style)
{
    std::string str;
    if(style != Style::NONE)
    {
        if(style & Style::BOLD)
            str += STYLE_TABLE[0];
        if(style & Style::UNDERLINE)
            str += STYLE_TABLE[1];
    }
    return str;
}

std::string Colorize(std::string const& str, int style)
{
    return StyleToStr(style) + str + COLOR_TABLE[(int)Color::RESET];
}


std::string Colorize(std::string const& str, Color color, int style)
{
    std::string style_str = StyleToStr(style);
    return style_str + COLOR_TABLE[(int)color] + str + COLOR_TABLE[(int)Color::RESET];
}

std::string Colorize(std::string const& str, Color color, Color bg, int style)
{
    std::string style_str = StyleToStr(style);
    return style_str + COLOR_TABLE[(int)color] + COLOR_TABLE_BG[(int)bg] + str + COLOR_TABLE[(int)Color::RESET];
}