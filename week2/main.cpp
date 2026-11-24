#include "wordstat.h"
#include <iostream>

int main() {
  auto c = wordstat::count("hello world");
  std::cout << c.words << '\n';
}