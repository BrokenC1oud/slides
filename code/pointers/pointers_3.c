#include <stdio.h>

int add(int a, int b) { return a + b; }

int main() {
  int (*func)(int, int);
  func = &add;
  printf("func(1, 2) = %d\n", func(1, 2));    // Implicit dereferencing
  printf("func(1, 2) = %d\n", (*func)(1, 2)); // Explicitly dereferencing
  return 0;
}
