#include "wordstat.h"

namespace wordstat {

Counts count(std::string_view text) {
  Counts counts{};
  int whitespace = 0;
  int first_word = 1;
  for (const char c : text) {
    counts.chars++;
    if (first_word) {
      if (c != ' ' && c != '\n' && c != '\t') {
        counts.words++;
      }
      first_word = 0;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      whitespace = 1;
    } else if (whitespace == 1) {
      whitespace = 0;
      counts.words++;
    }

    if (c == '\n') {
      counts.lines++;
    }
  }
  return counts;
}

std::string longest_word(std::string_view text) {
  std::string longest = "";
  std::string current_word;

  for (const char c : text) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (current_word.length() > longest.length()) {
        longest = current_word;
      }
      current_word.clear();
    } else {
      current_word += c;
    }
  }
  return longest;
}

} // namespace wordstat