#include <iostream>
#include <string>

int main() {
  std::string name{};
  int age{};

  std::cout << "What is your name? ";
  std::getline(std::cin >> std::ws, name);
  std::cout << "What is your age? ";
  std::cin >> age;

  std::cout << "Hello, " << name << "! You are " << age
            << " years old, and your name is " << name.size()
            << " characters long." << std::endl;
}
