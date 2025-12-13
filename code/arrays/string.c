#include <stdio.h>

int main() {
  char string[] = "你好 中国";
  printf("%s\n", string);
  printf("%c\n", string[0]);
  printf("%zu\n", sizeof(string));
  return 0;
}
