#pragma once
#include <string>
#include <string_view>

namespace wordstat {

struct Counts {
  int lines{};
  int words{};
  int chars{};
};

Counts count(std::string_view text);
std::string longest_word(std::string_view text);

} // namespace wordstat