#include <stdio.h>

int main() {
  // Declare and initialize an array
  int numbers[5] = {10, 20, 30, 40, 50};

  // Access and print elements of the array
  printf("Elements of the array:\n");
  for (int i = 0; i < 5; ++i) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }

  // Calculate the sum of array elements
  int sum = 0;
  for (int i = 0; i < 5; ++i) {
    sum += numbers[i];
  }
  printf("Sum of array elements: %d\n", sum);

  // Modify an element of the array
  numbers[2] = 100;

  // Display the modified array
  printf("Modified array after changing numbers[2] to 100:\n");
  for (int i = 0; i < 5; ++i) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }

  return 0;
}
