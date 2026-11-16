#include <stdio.h>
#include <string.h>

int main() {
  char name[100];
  int age;

  printf("What is your name? ");
  fgets(name, sizeof(name), stdin);

  printf("What is your age? ");
  scanf("%d", &age);

  printf(
      "Hello, %s! You are %d years old, and your name is %d characters long.\n",
      name, age, strlen(name) - 1);
}
