#include <iostream>
#include <string>

int main() {
  std::string name{};
  int age{};

  std::cout << "What is your name? ";
  std::getline(std::cin >> std::ws, name);
  std::cout << "What is your age? ";
  if (!(std::cin >> age)) {
    std::cerr << "Age must be a number\n";
    return 1;
  }

  std::cout << "Hello, " << name << "! You are " << age
            << " years old, and your name is " << name.size()
            << " characters long.\n";
}
