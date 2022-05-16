# Colorize
Add colors to your c++ program!

## Colors
List of all the available colors
```c++
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
```

## Code
```c++
#include "Colorize.hpp"

int main()
{
  std::cout << Colorize("Hello", Style::BOLD); // prints bold text
  std::cout << Colorize("Hello", Style::UNDERLINE); // prints underlined text
  std::cout << Colorize("Hello", Style::BOLD | Style::UNDERLINE); // prints both bold and underlined text!
  
  std::cout << Colorize("Hello!", Color::WHITE, Style::BOLD) << "\n"; // White bold text
  std::cout << Colorize("Hello!", Color::WHITE, Color::BLUE) << "\n"; // White text on Blue background
  std::cout << Colorize("Hello!", Color::WHITE, Color::BLUE, Style::BOLD) << "\n"; // White text on blue background with bold text.
}
```

## Usage
To use Colorize include `Colorize.hpp` and compile `Colorize.cpp` together with your project!