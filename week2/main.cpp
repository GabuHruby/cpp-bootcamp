#include "wordstat.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <file.txt>\n";
    return 1;
  }

  std::ifstream file(argv[1]);
  if (!file) {
    std::cerr << "Error opening file: " << argv[1] << "\n";
    return 1;
  }

  std::stringstream buffer;
  buffer << file.rdbuf();

  const std::string text = buffer.str();

  const wordstat::Counts counts = wordstat::count(text);
  const std::string longest = wordstat::longest_word(text);

  std::cout << "Lines: " << counts.lines << "\n";
  std::cout << "Words: " << counts.words << "\n";
  std::cout << "Characters: " << counts.chars << "\n";
  std::cout << "Longest word: " << longest << "\n";

  return 0;
}