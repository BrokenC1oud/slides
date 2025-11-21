#include <stdio.h>

int main() {
  int nums[10];
  printf("nums -> %p, nums[0] -> %p, nums[1] -> %p\n", nums, &(nums[0]),
         &(nums[1]));
  return 0;
}
