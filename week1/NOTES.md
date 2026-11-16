Five differences between c and c++:

1. you need to use namespaces like std:: before using functions from the standard library.
2. std::cout and std::cin instead of printf and scanf
3. .size() instead of strlen()
4. can initialize a variable with {}, and it refuses narrowing conventions
5. while you use fgets() in C, you use std::getline() in cpp
