#include <stdbool.h>
#include <stdio.h>

void _swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swapped = true;
        _swap(&arr[j], &arr[j + 1]);
      }
    }

    if (!swapped) {
      break;
    }
  }
}

int main() {
  int unordered[10] = {9, 5, 4, 2, 1, 7, 10, 3, 8, 6};
  bubble_sort(unordered, 10);
  printf("ordered.\n");
  for (int i = 0; i < 10; i++) {
    if (i != 0)
      printf(" ");
    printf("%d", unordered[i]);
  }
  printf("\n");
  return 0;
}
