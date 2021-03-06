#include "ftxui/screen/screen.hpp"
#include "ftxui/dom/elements.hpp"
#include <iostream>

int main(int argc, const char *argv[])
{
  using namespace ftxui;
  auto document =
    dbox(
      vbox(
        text(L"line_1"),
        text(L"line_2"),
        text(L"line_3"),
        text(L"line_4"),
        text(L"line_5")
      ) | border,
      text(L"overlay") | border | center
    );
  auto screen = Screen::Create(Dimension::Full(), Dimension::Fit(document));
  Render(screen, document.get());

  std::cout << screen.ToString();

  return 0;
}
