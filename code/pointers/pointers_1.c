#include <stdio.h>

int main() {
  int age = 42; // Answer to everything
  int *pAge = &age;

  printf("&age = %p\n", pAge); // %p means printing in pointer way
  printf("age = %d\n", *pAge); // dereferencing a pointer

  return 0;
}
